

// struct info {
//     int maxi;
//     int mini;
//     bool isBST;
//     int size;
// };

// info solve(TreeNode* root, int& ans) {
//     if (root == NULL) {
//         info temp;
//         temp.maxi = INT_MIN;
//         temp.mini = INT_MAX;
//         temp.isBST = true;
//         temp.size = 0;
//         return temp;
//     }

//     info left = solve(root->left, ans);
//     info right = solve(root->right, ans);
//     info currNode;

//     currNode.size = left.size + right.size + 1;
//     currNode.maxi = max(root->data, right.maxi);
//     currNode.mini = min(root->data, left.mini);

//     if (left.isBST && right.isBST && root->data > left.maxi && root->data < right.mini) {
//         currNode.isBST = true;
//         ans = max(ans, currNode.size);
//     } else {
//         currNode.isBST = false;
//     }

//     return currNode;
// }

// int largestBST(TreeNode* root) {
//     int maxSize = 0;
//     info temp = solve(root, maxSize);
//     return maxSize;
// }