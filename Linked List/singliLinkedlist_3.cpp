// insert in middel (given position) 
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

// insert at head
void InsertAtHead(Node* &head, int d){

    // new node create
    Node* temp = new Node(d);
    temp-> next = head;
    head = temp;
}

// insert at tail
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void InsertAtPosition(Node* &head, int position, int d){

    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position){
        temp = temp -> next;
        cnt++;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

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
     Node* head = node1;
     Node* tail = node1;
     print(tail);

     InsertAtTail(tail, 12);
      print(tail);

      InsertAtTail(tail, 15);
      print(tail);

    //   insert at position

    InsertAtPosition(head, 2, 22);
    print(head);

    return 0;
}