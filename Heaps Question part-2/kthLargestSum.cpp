//  K-th Largest Sum Subarray

// link:-  https://www.naukri.com/code360/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0


#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    vector<int> sunStore;
    int n = arr.size();

    for(int i =0; i<n, i++){
        int sum = 0;
        for(int j=1; j<n; j++){
            sum += arr[j];
            sumStore.push_back(sum);
        }
    }
    sort(sumStore.begin(), sumStore.end());
    return sumStore[sumStore.size() - k];
}