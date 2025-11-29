//  ###---- CODE 360 ###

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     // Write your code here.
//     if (root == NULL) {
//         return false;
//     }
//     if (root->data == x) {
//         return true;
//     }
//     else if(root->data > x) {
//         return searchInBST(root->left, x);
//     }
//     else {
//         return searchInBST(root->right, x);
//     }
// }


#include <iostream>
using namespace std;

class BinaryTreeNode {
public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode* insertIntoBST(BinaryTreeNode* root, int d) {
    if (root == NULL) {
        return new BinaryTreeNode(d);
    }
    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

bool searchInBST(BinaryTreeNode* root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x) {
        return true;
    }
    else if (root->data > x) {
        return searchInBST(root->left, x);
    }
    else {
        return searchInBST(root->right, x);
    }
}

int main() {
    BinaryTreeNode* root = NULL;

    int arr[] = {10, 5, 15, 3, 7, 13, 18};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insertIntoBST(root, arr[i]);
    }

    int x = 7;

    if (searchInBST(root, x)) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }
}
