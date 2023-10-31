#include<iostream>
using namespace std;

int partition(int* arr, int low, int high){
    int i = low;
    int j= high;
    int pivot = arr[low];
    while(i<j){
        while(i<=high-1 and arr[i]<=pivot){
            i++;
        }
        while(j>=low+1 and arr[j]>pivot){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[low], arr[j]);
    return j;

}


void quickSort(int *arr, int low, int high){
    if(low<high){
        int part = partition(arr, low, high);
        quickSort(arr, low, part-1);
        quickSort(arr, part+1, high);
    }
}


int main()
{
    int arr[100] = {10,90,80,70};
    int start = 0;
    int n = 4;

    quickSort(arr, start, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

     
    return 0;
}