#include<iostream>
using namespace std;

void TOH(int n, char A, char B, char C){
    if(n == 1){
        cout<<"Move disc "<<n<<" from "<<A<<" to "<<C<<endl;
    }
    else{
        TOH(n-1, A, C, B);
        cout<<"Move disc "<<n<<" from "<<A<<" to "<<C<<endl;
        TOH(n-1, B, A, C);
        
        
        
    }
    
    
}

int main()
{
    int n;
    cout<<"Enter number of discs: ";
    cin>>n;
    TOH(n, 'A', 'B', 'C');

     
    return 0;
}