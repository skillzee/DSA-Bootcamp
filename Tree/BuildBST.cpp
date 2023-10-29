#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;


    Node(int item){
        this->data =item;
        this->left = NULL;
        this->right = NULL;

    }
};

Node * create(int data){
    Node* newNode = new Node(data);
    return newNode;
    

}

Node* insert(Node* root, int data){
    if(root == NULL){
        return create(data);
    }

    if(data<root->data){
        root->left = insert(root->left, data);
    }

    if(data>root->data){
        root->right = insert(root->right, data);
    }

    return root;

}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root->left);
    cout<<char(root->data)<<" ";
    Inorder(root->right);
}


int main()
{
    Node* root= NULL;

    root = insert(root, 'A');
    insert(root, 'B');
    insert(root, 'Z');
    insert(root, 'R');
    insert(root, 'H');
    insert(root, 'O');


    Inorder(root);

     
    return 0;
}