// // N-Queen Problem || Backtracking Day 2 

// void addSolution(vector<vector<int> > &ans, vector<vector<int>> &board, int n){
//     vector<int> temp;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             temp.push_back(board[i][j]);
//         }
//     }
//     ans.push_back(temp);
// }

// bool isSafe(int row, int col, vector<vector<int>> &board, int n){
//     // write the code (17:30)
// }


// void solve(int col, vector<vector<int> > &ans, vector<vector<int>> &board, int n){
//     if(col ==n){
//         addSolution(board, ans, n);
//         return;
       
//         // solve 1 case and rest recursion will take care

//     }
// }

// vector<vector<int>> nQueens(int n)
// {
// 	// Write your code here
// 	vector<vector<int>> board(n, vector<int>(n,0));
//     vector<vector<int>> ans;

//     solve(0, ans, board, n);

//     return ans;
// }