// 26. Remove Duplicates from Sorted Array

#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int> &nums){
        int n = nums.size();

        if (n == 0) return 0;

        int i=0, j=1;

        while(j<n){
            if(nums[i] != nums[j]){
                i++;
                nums[i]= nums[j];
            }
            j++;
        }
        return i+1;
    }
};

int main(){
    int n;

    cout<<"enter the number of elements : ";
    cin>> n;

    if(n<=0){
        cout<< "Array is empty.";
        return 0;

    }

    vector<int> nums(n);
    cout<< "enter " << n <<" sorted elements :\n";
    for(int i=0; i<n; i++)
        cin>> nums[i];
    
    Solution Sol;
    int result = Sol.removeDuplicates(nums);

    cout<<"Total Number of unique elements : " << result << endl ;

    cout << "Modified array (first " << result << " elements): [";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << (i < result - 1 ? ", " : "");
    }
    cout << "]" << endl;

    return 0;
}