//Bubble Sort is a sorting algorithm that iterates over an array multiple times. In each iteration, it compares adjacent elements arr[i] and arr[i+1], and swaps them if arr[i] > arr[i+1]. This pushes the largest unsorted element to the end in each pass. The process repeats for n-1 passes (where n is the array size), reducing the comparison range each time.

#include<iostream>
using namespace std;

void bubble_sort(int size, int arr[]){

    for(int i=0; i<size-1; i++){
        for(int j=0;j<size-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}

int main(){
    int size=6;
    int arr[]={5,3,3,6,3,6};
    bubble_sort(size,arr);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
