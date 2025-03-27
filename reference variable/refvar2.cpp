#include<iostream>
using namespace std;

// reference variable
void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}


int main(){

    int n =5;
    cout<<"before"<<n <<endl;
    update1(n);
     cout<<"After"<<n <<endl;

    
     cout<<"before"<< n <<endl;
     update2(n);
     cout<<"After"<< n <<endl;


    return 0;
}