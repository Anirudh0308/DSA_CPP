
//  #####_____ code 360  _______#######

// int solve((BinaryTreeNode<int>* root,int& i, int k)){
//     // base case
//     if(root ==NULL){
//         return -1;
//     }

//     int left = solve(root->left, i, k);

//     if(left != -1){
//         return left;
//     }
//     i++;
//     if(i == k){
//         return root ->data;

//         return solve(root->right, i, k);
//     }
// }

// int kthSmallest(BinaryTreeNode<int>* root,int k){
//     int i=0;
//     int ans = solve(root, i, k);
    // return ans;
// }


#include <iostream>
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

int solve(BinaryTreeNode<int>* root, int& i, int k) {
    if (root == NULL)
        return -1;

    int left = solve(root->left, i, k);
    if (left != -1)
        return left;

    i++;
    if (i == k)
        return root->data;

    return solve(root->right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i = 0;
    return solve(root, i, k);
}

int main() {
    BinaryTreeNode<int>* root = NULL;

    int arr[] = {10, 5, 15, 3, 7, 13, 18};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insertIntoBST(root, arr[i]);
    }

    int k = 3;

    cout << kthSmallest(root, k);

    return 0;
}
