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
    cout<<(root->data)<<" ";
    Inorder(root->right);
}


int main()
{
    Node* root= NULL;

    root = insert(root, 9);
    insert(root, 8);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 6);

    Inorder(root);

     
    return 0;
}