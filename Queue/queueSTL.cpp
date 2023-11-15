#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> q, int size){
    queue<int> q2;
    for(int i = 0; i<size; i++){
        q2.push(q.front());
        cout<<q.front()<<" ";
        q.pop();

    }

    for(int i = 0; i<size; i++){
        q.push(q2.front());
        q2.pop();
    }
}

int main()
{
    queue<int> q;
    queue<int> q1;
   

    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements:";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    cout<<"Enter the element you want to delete: ";
    int num;
    cin>>num;
    for(int i = 0; i<n;i++){
        q1.push(q.front());
        
        if(q.front()==num){
            q.pop();
        }

    }
    for(int i = 0; i<n;i++){
        q.push(q1.front());
        q1.pop();
    }

    display(q, n);
    
    
    return 0;
}