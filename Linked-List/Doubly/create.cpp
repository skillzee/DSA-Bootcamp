#include<iostream>
using namespace std;
struct link{
    int data;
    link* next;
    link* prev;

};
link *node;
link* start = NULL;
link* current;


void insertAtHead(int data){
    node = new link;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    if(start == NULL){
        start = node;
        current = node;
    }
    else{
        node->next = start;
        start->prev = node;
        start = node;
    }
}


void insertAtTail(int data){
    node = new link;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    if(start == NULL){
        start = node;
        current = node;
    }
    else{
        current->next = node;
        node->prev = current;
        current = node;

    }
}

void insertAtPosition(int data, int loc){
    // node = new link;
    // node->next = NULL;
    // node->prev = NULL;
    // if(start == NULL){
    //     start = node;
    //     current = node;
    // }
    link* temp = start;
    current = temp->next;
    for(int i =0; i<loc-2;i++){
        temp = temp->next;
        current = current->next;
    }
    node = new link;
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    temp->next = node;
    node->prev = temp;
    node->next = current;
    current->prev = node;
}


void print(){
    link* temp = start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void present(int data){
    link* temp = start;
    while(temp!=NULL){
        if(temp->data % 2 == 0){
            cout<<temp->data<<" ";
        }
        temp = temp->next;
    }
}



int main()
{

    insertAtHead(5);
    insertAtHead(7);
    insertAtHead(9);
    insertAtTail(6);
    insertAtPosition(98,3);
    print();
    cout<<endl;
    present(5);
     
    return 0;
}