#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;
// Max Heap
    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.push(6);
    pq.push(7);
    cout<<"top element is :" << pq.top()<<endl;

    pq.pop();
    cout<<"After pop top element is :" << pq.top() <<endl;

// min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(3);
    minheap.push(6);

    cout<<"top element is :" << minheap.top()<<endl;

    minheap.pop();
    cout<<"After pop top element is :" << minheap.top() <<endl;

    return 0;
}