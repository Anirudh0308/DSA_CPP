#include <bits/stdc++.h> 

//  #####_____ code 360  _______#######


// bool isBST(BinaryTreeNode<int> *root, int min, int max){
//     // base case
//     if(root == NULL)
//         return true;
    
    
//     if(root-> data >= min && root -> data <= max){
//         bool left = isBST(root -> left, min, root->data);
//         bool right = isBST(root -> right, root-> data, max);
//         return left && right;
//     }
//     else
//         return false;
// }

// bool validateBST(BinaryTreeNode<int> *root) {
//     // Write your code here
//     return isBST(root, INT_MIN, INT_MAX);
// }

#include <iostream>
#include <climits>
using namespace std;

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int>* insertIntoBST(BinaryTreeNode<int>* root, int d) {
    if (root == NULL) {
        return new BinaryTreeNode<int>(d);
    }
    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

// code here for solution
bool isBST(BinaryTreeNode<int>* root, int min, int max) {
    if (root == NULL)
        return true;

    if (root->data >= min && root->data <= max) {
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && right;
    }
    return false;
}

bool validateBST(BinaryTreeNode<int>* root) {
    return isBST(root, INT_MIN, INT_MAX);
}

int main() {
    BinaryTreeNode<int>* root = NULL;

    int arr[] = {10, 5, 15, 3, 7, 13, 18};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insertIntoBST(root, arr[i]);
    }

    if (validateBST(root)) {
        cout << "Valid BST";
    } else {
        cout << "Invalid BST";
    }

    return 0;
}
