#include<iostream>
using namespace std;
void insertion_sort(int size, int arr[]){
    for(int i=1;i<size;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int size=6;
    int arr[]={3,2,6,3,1,4};
    insertion_sort(size,arr);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}