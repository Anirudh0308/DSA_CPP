#include<iostream>
#include<queue>
using namespace std;

int main(){
    // cretion of queue
    queue<int> q;

    // push operation
    q.push(11);
    q.push(15);
    q.push(13);

    cout<< "Size of queue is : "<< q.size() <<endl;

    // pop operation
    q.pop();
    q.pop();
    q.pop();

    cout<< "Size of queue is : "<< q.size() <<endl;

    if(q.empty()){
        cout<<"queue is empty"  <<endl;
    }else{
        cout<<"queue is not empty"  <<endl;
    }

    return 0;
}