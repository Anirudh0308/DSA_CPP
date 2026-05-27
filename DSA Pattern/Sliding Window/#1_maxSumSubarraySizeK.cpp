#include<bits/stdc++.h>

using namespace std; 

class solution{
public: 
    int maxSumSubArray(vector<int>& arr, int k){
        int n = arr.size();
        if(n<k) return 0;

        int windowSum = 0;
        int maxSum = INT_MIN;

        for(int i =0; i<k; i++){
            windowSum += arr[i];
        }
        maxSum = windowSum;

        for(int i=k; i<n; i++){
            windowSum += arr[i] - arr[i-k];
            maxSum = max(maxSum, windowSum);
        }
        return maxSum;
    }
    
};

int main(){
    int n, k;
    cout<< "enter the total number of element : ";
    cin>> n;

    vector<int>arr(n);
    cout<< "Enter "<< n<< " number of element\n";
    for(int i= 0; i< n; i++){
        cin>> arr[i];
    }
    cout<< " enter number of subArray to find max sum : ";
    cin>> k;

    solution sol;
    int result = sol.maxSumSubArray(arr, k);
    cout << "The result is :" << result ;

    return 0;
}