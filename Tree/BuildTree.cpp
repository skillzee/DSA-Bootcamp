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
Node* buildTree(){
    int n;
    cout<<"Enter the data in root element: ";
    cin>>n;
    Node* newNode = new Node(n);
    if(n == -1){
        return NULL;
    }

    cout<<"Enter the data to be inserted in left of "<<newNode->data<<": ";
    newNode->left = buildTree();
    cout<<"Enter the data to be inserted in right of "<<newNode->data<<": ";
    newNode->right = buildTree();

    return newNode;
    

}


void printInorder(Node* root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);

}

int main()
{

    Node* root = buildTree();
    
    printInorder(root);
    

     
    return 0;
}