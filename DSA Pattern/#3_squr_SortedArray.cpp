#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
public:
    vector<int> sortedSquares(vector<int>& nums){
        // step -1 : square all elements 
        for(int i=0; i < nums.size(); i++){
            nums[i] = nums[i] * nums[i];

        }
       // step - 2: sort element
        sort(begin(nums), end(nums));
        return nums;
    }

};

int main(){
    int n;
    
    cout<<"enter the number of element : ";
    cin>> n;

    vector<int>nums(n);
    cout<< "Enter " << n <<" sorted elements including negative \n ";
    for(int i=0; i<n; i++){
        cin>> nums[i];

    }

    solution sol;
    vector<int> result = sol.sortedSquares(nums);

    for(int i=0; i<n; i++){
        cout<< result[i] << " ";
    }
}