#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){

        this-> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* insertInotBST(node* &root, int d){
    // base case
    if(root = NULL){
    root = new node(d);
    return root;
    }

    if (d > root -> data){
        // right part me insert karna h
        root->right = insertInotBST(root->right, d);
    }else{
        // left part me insert karna h
        root->left = insertInotBST(root->left, d);
    }
    return root;
}
void takeInput(node* &root){
    int data;
    cin >> data;
    while (data!= -1){
    root =   insertInotBST(root, data);
         cin >> data;
    }
    

}


int main(){
    node* root = NULL;
    cout<< "enter data to create BST " <<endl;
    takeInput(root);

    return 0;
}