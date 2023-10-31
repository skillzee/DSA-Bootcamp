#include<iostream>
using namespace std;

void merge(int arr[], int start, int last){
    int mid = (start+last)/2;
    int len1 = mid-start+1;
    int len2 = last - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k = start;

    for(int i =0 ;i <len1; i++){
        arr1[i] = arr[k++];
    }
    k = mid+1;
    for(int i = 0; i<len2; i++){
        arr2[i] = arr[k++];
    }

    int mainArrayIndex = start;
    int index1 = 0;
    int index2 = 0;

    while(index1<len1 and index2<len2){
        if(arr1[index1]<=arr2[index2]){
            arr[mainArrayIndex++] = arr1[index1++];
        }

        if(arr1[index1]> arr2[index2]){
            arr[mainArrayIndex++] = arr2[index2++];
        }


    }

    while (index1<len1)
    {
        arr[mainArrayIndex++] = arr1[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++] = arr2[index2++];
    }
    


}


void mergeSort(int arr[], int start, int last){

    if(start>=last){
        return;

    }
    int mid  = (start+last)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, last);

    merge(arr, start, last);
    

}


int main()
{

    // int arr[100];
    int arr[100] = {10,90,80,70};
    int start = 0;
    int n = 4;

    mergeSort(arr, start, n-1);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

     
    return 0;
}