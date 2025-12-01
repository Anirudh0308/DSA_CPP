// TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
// {
//     // Write your code here.

//     // base case
//     if(root == NULL){
//         return NULL;
//     }

//     if(root->data < p->data && root->data < Q->data){
//         return LCAinBST(root->right, P, Q);
//     }

//     if(root->data > p->data && root->data > Q->data){
//         return LCAinBST(root->left, P, Q);
//     }

//     return root;
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

TreeNode* search(TreeNode* root, int key) {
    if (root == NULL || root->data == key)
        return root;
    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

TreeNode* LCAinaBST(TreeNode* root, TreeNode* P, TreeNode* Q) {
    if (root == NULL)
        return NULL;

    if (root->data < P->data && root->data < Q->data)
        return LCAinaBST(root->right, P, Q);

    if (root->data > P->data && root->data > Q->data)
        return LCAinaBST(root->left, P, Q);

    return root;
}

int main() {
    TreeNode* root = NULL;

    int arr[] = {10, 5, 15, 3, 7, 13, 18};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insertIntoBST(root, arr[i]);
    }

    int val1 = 3;
    int val2 = 7;

    TreeNode* P = search(root, val1);
    TreeNode* Q = search(root, val2);

    TreeNode* ans = LCAinaBST(root, P, Q);

    if (ans)
        cout << ans->data;
    else
        cout << -1;

    return 0;
}
