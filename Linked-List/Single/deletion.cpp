#include<iostream>
using namespace std;

struct link{
    public:
    int data;
    link* next;
};


struct link* start = NULL;
struct link* node;
struct link* current;


void insertAtHead(int data){
    // int n;
    // cin>>n;
    // for(int i =0; i<n; i++){
        node = new link;
        node->data= data;
        node->next == NULL;
        if(start == NULL){
            start = node;
            current = node;
        }
        else{
            node->next = start;
            start = node;
        }
    // }
}


void insertAtTail(int data){
    node = new link;
    node->next = NULL;
    node->data = data;
    if(start == NULL){
        start = node;
        current = node;
    }
    else{
        current->next = node;
        current = node;
    }
    
}

void insertAtLoc(int data, int pos){
    // int location;
    link* ptr = start;
    current = ptr->next;
    node = new link;
    node->data = data;
    for(int i =0; i<pos-2; i++){
        ptr = ptr->next;
        current = current->next;
    }
    ptr->next = node;
    node->next = current;
    
}


void print(){
    link* temp = start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void delete1(int pos){
    link* temp = start;
    current = start->next;
    for(int i = 0; i<pos-2; i++){
        temp = temp->next;
        current = current->next;
    }
    
    temp->next = current->next;
    // current->next = NULL;

}


int main()
{

    insertAtHead(5);
    insertAtHead(6);
    
    insertAtTail(7);
    insertAtLoc(8,2);
    print();
    delete1(3);
    print();
     
    return 0;
}