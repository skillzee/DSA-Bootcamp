#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int item){
        this->data = item;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* create(int item){
    Node* newNode = new Node(item);
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

bool search(Node* root, int item){
    if(root == NULL){
        return false;
    }

    if(root->data == item){
        return true;
    }

    if(item<root->data){
        return search(root->left, item);
    }

    if(item>root->data){
        return search(root->right, item);
    }
}


void printLeafNodes(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left == NULL and root->right == NULL){
        cout<<root->data<<" ";
    }

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

void rightView(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    rightView(root->right);
}


int main()
{
    Node* root = NULL;
    root = insert(root, 5);
    insert(root, 10);
    insert(root, 11);
    insert(root, 4);
    insert(root, 8);
    insert(root, 3);

    if(search(root, 6)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

    // printLeafNodes(root);

    rightView(root);


    
    
    
     
    return 0;
}