#include<iostream>
using namespace std;

void selection_sort(int size, int arr[]){
    
    for(int i=0; i<size-1; i++){
        int temp1=i, temp2;
        
        for(int j=i+1; j<size; j++){
            if(arr[temp1]>arr[j]){
                temp1=j;
            }
        }
        temp2=arr[i];
        arr[i]=arr[temp1];
        arr[temp1]=temp2;
    }
}

int main(){
    int size=5;
    int arr[]={3,4,2,5,7};
    selection_sort(size,arr);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}