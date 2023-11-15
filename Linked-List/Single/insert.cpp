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
// Main linked list::           start(78)->(6)->(5)->current(7)->NULL;

void insertAtHead(int data){//6->NULL
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
    if(pos ==1){
        insertAtHead(data);
    }
    else{
    link* ptr = start;
    link* ptrkaNext = ptr->next;
    node = new link;
    node->data = data;
    for(int i =0; i<pos-2; i++){
        ptr = ptr->next;
        ptrkaNext =ptrkaNext->next;
    }
    ptr->next = node;
    node->next = ptrkaNext;
    
}
}


void print(){
    link* temp = start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{

    insertAtHead(5);
    insertAtHead(6);
    insertAtHead(78);
    
    insertAtTail(7);
    print();
    cout<<endl;
    insertAtLoc(8,5);
    insertAtLoc(9,6);
    print();
     
    return 0;
}