#include<bits/stdc++.h>

using namespace std;
int main()
{
    stack<int> st;
    stack<int> st1;
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++){
        int n;
        cin>>n;
        st.push(n);
    }
    for(int i = 0; i<n; i++){
        cout<<st.top()<<" ";
        st1.push(st.top());
        st.pop();
    }
    
    cout<<endl;
    for(int i =0; i<n;i++){
        st.push(st1.top());
        st1.pop();
    }
    cout<<endl;
    cout<<st.top();
    

    
     
    return 0;
}