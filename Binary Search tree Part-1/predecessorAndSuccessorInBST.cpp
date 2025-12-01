


// pair<int, int> predecessorSuccessor(TreeNode *root, int key)
// {
//     // Write your code here.

//     // find key
//     BinaryTreeNode<int>* temp = root;
//     int pred = -1;
//     int succ = -1;


//     while(temp->data != key){
//         if(temp->data > key){
//             temp = temp->left;
//             succ = temp-> data;
//         }
//         else{
//             temp = temp->right;
//             pred = temp->data;
//         }
//     }
//     // pred & succ
//     BinaryTreeNode<int>* leftTree = temp->left;
//     while(leftTree != NULL){
//         pred = leftTree -> data;
//         leftTree = LeftTree->right;
//     }

//     BinaryTreeNode<int>* rightTree = temp->right;
//     while(rightTree != NULL){
//         succ = rightTree->data;
//         rightTree = rightTree -> left;
//     }

//     pair<int, int> ans = make_pair(pred, succ);
//     return ans;
// }


#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

TreeNode* insertIntoBST(TreeNode* root, int d) {
    if (root == NULL)
        return new TreeNode(d);

    if (d > root->data)
        root->right = insertIntoBST(root->right, d);
    else
        root->left = insertIntoBST(root->left, d);

    return root;
}

pair<int, int> predecessorSuccessor(TreeNode* root, int key) {
    TreeNode* temp = root;
    int pred = -1;
    int succ = -1;

    while (temp && temp->data != key) {
        if (key < temp->data) {
            succ = temp->data;
            temp = temp->left;
        } else {
            pred = temp->data;
            temp = temp->right;
        }
    }

    if (!temp)
        return {pred, succ};

    TreeNode* leftTree = temp->left;
    while (leftTree) {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    TreeNode* rightTree = temp->right;
    while (rightTree) {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    return {pred, succ};
}

int main() {
    TreeNode* root = NULL;

    int arr[] = {10, 5, 15, 3, 7, 13, 18};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insertIntoBST(root, arr[i]);
    }

    int key = 10;

    pair<int, int> ans = predecessorSuccessor(root, key);
    cout << ans.first << " " << ans.second;

    return 0;
}
