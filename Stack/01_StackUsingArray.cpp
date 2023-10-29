#include<iostream>
using namespace std;

class Stack{
    int data;
    int top = -1;
    int max = 10;
    int stack[10];
    public:

    void push(int item){
        if(top>=max){
            cout<<"Stack Overflow"<<endl;
        }
        stack[++top] = item;

    }

    int pop(){
        if(top == -1){
            cout<<"Stack Underflow";
        }
        else{

            return stack[top--];
                      

        }

    }

    int peek(){
        return stack[top];
    }

    bool empty(){
        return (top<0);
    }


    
};

int main()
{
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop()<<" popped form stack"<<endl;

     cout <<"Elements present in stack : "; 
    while(!s.empty()) 
    { 
        // print top element in stack 
        cout << s.peek() <<" "; 
        // remove top element in stack 
        s.pop(); 
    } 
     
    return 0;
}