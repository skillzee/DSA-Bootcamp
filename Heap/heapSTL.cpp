#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v;
    cout<<"Enter size: ";
    int n; 
    cin>>n;
    // cout<<"Enter the elements in the heap: ";
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    make_heap(v.begin(), v.end(), greater<int>());
    sort(v.begin(), v.end());
    

    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // cout<<v.size();

    cout<<"Enter element to delete: ";
    int num;
    cin>>num;
    int index;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == num){
            index = i;
        }
        
    }

    v.erase(v.begin()+index);
    cout<<"Enter element to delete: ";
    int num2;
    cin>>num2;
    int index2;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == num2){
            index2 = i;
        }
        
    }

    v.erase(v.begin()+index2);

    for(int i = 0; i<n-2; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}