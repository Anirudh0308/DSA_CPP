#include<iostream>
using namespace std;
// bad prectice (use nhi kare)
void a(int& i){
    cout << i <<endl;
    
}

int main(){
    int i = 5;
    a(i);

    return 0;
}