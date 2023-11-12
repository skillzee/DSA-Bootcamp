#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int element = 3;
    int index;
    for(int i= 0; i<size; i++){
        if(arr[i] == element){
            index = i;
        }
    }
    for(int i = index; i<size;i++){
        arr[i] = arr[i+1];
    }
    cout<<"Array after deletion: "<<endl;
    for(int i = 0;i <size-1;i++){
        cout<<arr[i]<<" ";
    }

     
    return 0;
}