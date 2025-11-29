#include<iostream>
#include<queue>
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

node* insertIntoBST(node* root, int d){
    // base case
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if (d > root -> data){
        // right part me insert karna h
        root->right = insertIntoBST(root->right, d);
    }else{
        // left part me insert karna h
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}


void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

node* minVal(node * root){
    node* temp = root;

    while (temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}
node* maxVal(node * root){
    node* temp = root;
    
    while (temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

node* deleteFromBST(node* root, int val){
    // base case
    if (root == NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if (root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root -> left != NULL && root -> right == NULL){
            node* temp = root -> left;
            delete root;
            return temp;
        }
        // right child
        if (root -> left == NULL && root -> right != NULL){
            node* temp = root -> right;
            delete root;
            return temp;
        }
        // 2 child
        if (root -> left != NULL && root -> right != NULL){
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
    else if (root -> data > val){
        // left part me jana h
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }else{
        // right part me jana h
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}


void takeInput(node* &root){
    int data;
    cin >> data;
    while (data!= -1){
        root =   insertIntoBST(root, data);
        cin >> data;
    }
    

}


int main(){
    node* root = NULL;
    cout<< "enter data to create BST " <<endl;
    takeInput(root);
    
	cout << "tree is" << endl;
    levelOrderTraversal(root);

    cout << endl << "inorder is " << endl;
    inorder(root);

    cout << endl << "preorder is " << endl;
    preorder(root);

    cout << endl << "postorder is " << endl;
    postorder(root);

    // input :- 50 20 70 30 90 110 -1
    cout <<endl << "min value is "<< minVal(root)-> data << endl;
    cout<< "max value is "<< maxVal(root)-> data << endl;

    // deletion
    cout << "enter value to be deleted " << endl;
    root = deleteFromBST(root, 30);

    cout << endl << " Aftre delete - inorder is " << endl;
    inorder(root);

    return 0;
}
