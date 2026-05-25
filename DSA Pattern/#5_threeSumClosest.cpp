#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    int threeSumClosest(vector<int>& nums, int target){
        int n = nums.size();

        int closestSum = 100000;

        for(int k=0; k<=n-3; k++){
            int i = k+1;
            int j = n-1;

            int sum = nums[k] + nums[i] + nums[j];

            if(abs(target-sum ) < abs(target-closestSum))
                closestSum = sum;
            
            if(target > sum)
                i++;
            else
                j--;
        }
        return closestSum;
    }
};

int main(){
    int n, target;
    cout<< "Enter the number : ";
    cin>>n;

    cout<< "Enter cloest target number : ";
    cin>> target;
    

    vector<int>nums(n);
    cout<< "enter "<< n << "number \n";
    for(int  i=0; i< n; i++){
        cin>> nums[i];
    }

    solution Sol;
    int result = Sol.threeSumClosest(nums, target);

    cout<<"result is : "<< result;

    return 0;
}