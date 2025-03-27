// insert at tail/End 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};


// insert at tail
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &tail){
    Node* temp = tail;

    while (temp!= NULL)
    {
         cout<< temp -> data <<" ";
         temp = temp -> next;
    }
    cout<<endl;
    
}

int main(){
    Node* node1 = new Node(10);

    //  head pointer to node1
     Node* tail = node1;
     print(tail);

     InsertAtTail(tail, 12);
      print(tail);

      InsertAtTail(tail, 15);
      print(tail);

    return 0;
}