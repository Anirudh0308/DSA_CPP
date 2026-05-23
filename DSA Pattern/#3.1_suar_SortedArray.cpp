#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    vector<int> sortedSquare(vector<int>& nums){
        int n= nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n-1;
        int index = n-1;

        while(left <= right){
            int leftsqr = nums[left] * nums[left];
            int rightsqr = nums[right] * nums[right];

            if(leftsqr < rightsqr){
                result[index] = rightsqr;
                right--;
            }
            else{
                result[index] = leftsqr;
                left++;
            }
            index--;
        }
        return result;
    }

};

int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin >> n;

    vector<int> nums(n);
    cout<< "Enter "<< n << " Sorted element including negative : ";
    for(int i=0; i<n; i++){
        cin>> nums[i];
    }

    Solution sol;
    vector<int> result = sol.sortedSquare(nums);

    cout<< "sorted square Array element is : ";
    for(int i=0; i< n; i++)
        cout<< result[i] << " ";
}