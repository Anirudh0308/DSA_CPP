#include <iostream>
using namespace std;

int factorial (int n){
    if (n==0)
    return 1;
    
    int a = factorial(n-1);
    int b = n * a;
    return b;
}

int main(){
    int n;

    cin>>n;

    int ans = factorial(n);
    cout<<ans <<endl;
    return 0;
}