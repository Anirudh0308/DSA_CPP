// //  Merge K Sorted Arrays

// // link :- https://www.naukri.com/code360/problems/merge-k-sorted-arrays_975379?leftPanelTab=0


// #include <bits/stdc++.h> 
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     // Write your code here. 

//     priority_queue<node*, vector<node*>, compare> minHeap;

//     for(int i=0; i<k; i++){
//         node* temp= new node(kArrays[i][0], i, 0);
//         minHeap.push(temp);

//     }

//     vector<int> ans;

//     while(minHeap.size()>0){
//         node* temp= minHeap.top();

//         ans.push_back(temp->data);
//         minHeap.pop();

//         int i = temp->i;
//         int j= temp->j;

//         if(j+1 < kArrays[i].size()){
//             node* next = new node(kArrays[i][j+1], i, j+1);
//             minHeap.push(next);
//         }
//     }
//     return ans;
// }



// #include <algorithm>
// #include <vector>
// int getKthLargest(vector<int> &arr, int k)
// {
// 	//	Write your code here.
//     vector<int> sumStore;
//     int n = arr.size();

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             sumStore.push_back(sum);
//         }
//     }
//     sort(sumStore.begin(), sumStore.end());
    
//     return sumStore[sumStore.size() - k];

// }