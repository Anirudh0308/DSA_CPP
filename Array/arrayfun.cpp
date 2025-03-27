#include<iostream>
using namespace std;
 void printArray(int arr[], int size){
    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
 }
int main(){
    int third[15]={2,7};
    printArray(third, 15);
    cout<<endl;

    int fourth[10]={0};
    printArray(fourth, 10);
    cout<<endl;
    
    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is "<<fourthsize;
}