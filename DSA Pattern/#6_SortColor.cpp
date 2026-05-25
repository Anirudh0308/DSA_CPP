#include<bits/stdc++.h>

using namespace std;
class solution{
public:
    void sortColors(vector<int>& nums){
        int n= nums.size();

        int i=0;
        int j=0;
        int k = n-1;

        while(j<=k){
            if(nums[j] == 1){
                j++;
            }
            else if(nums[j] == 2){
                swap(nums[j], nums[k]);
                k--;
            }
            else{
                swap(nums[j], nums[i]);
                    i++;
                    j++;
                }
        }
        

    }

};

int main(){
    int n;
    cout<<" enter number of colors : ";
    cin>> n ;

    vector<int>nums(n);
    cout<<"enter " << n << "color combinatation for sorting :\n";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    solution sol;
    sol.sortColors(nums);

    cout<< "result is : ";
    for(int i=0; i<n; i++){
        cout<< nums[i]<< " ";
    }

    return 0;
}