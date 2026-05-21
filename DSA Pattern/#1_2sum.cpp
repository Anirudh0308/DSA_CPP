#include<iostream>
#include<vector>

using namespace std;

class Solutions{
public: 
    vector<int> twoSum(vector<int>& numbers, int target){
        int left =0;
        int right = numbers.size()-1;

        while(left< right){
            int currentSum = numbers[left] + numbers[right];

            if(currentSum == target){
                return{left+1, right+1};
            }
            else if(currentSum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};
    }
};


int main(){
    int n, target;

    cout<< "enter the number of element :";
    cin>> n;

    vector<int> numbers(n);
    cout<<" enter " << n << " sorted numbers : ";
    for(int i=0; i < n ; i++){
        cin >> numbers[i];
    }

    cout<< "enter the target number : ";
    cin>> target;

    Solutions sol;
    vector <int> result = sol.twoSum(numbers , target );

    if (result.empty()) {
        cout << "No two sum solution found." << endl;
    } else {
        cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;
    }

    return 0;


}