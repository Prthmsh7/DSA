#include<iostream>
using namespace std;
void merge_sort(int size, int arr[]){
    // break the array into 2 part
    int a=size/2;
    int b=size-size/2;
    int arr1[a];
    int arr2[b];
    int temp;
    //Put the elements into the broken array
    for(int i=0;i<a;i++){
        arr1[i]=arr[i];
    }
    for(int i=a;i<size;i++){
        arr2[i]=arr[i];
    }
    if(size!=1){
        merge_sort(a, arr1);//merge sort first half
        merge_sort(b, arr2);//merge sort second half{

    }
        // compare the elements of both the arrays and put them in the main array
        int k=0,temp;
        for(int i=0;i<a;i++){
            temp=arr1[i];
            for(int j=0;j<b;j++){
                if(arr2[j]<temp){
                    temp=arr2[j];
                    arr2[j]=arr[b-1];// we set it as the maximum size so that the loop dosnt detect any smaller value next time
                    continue;
                }
                arr[k]=temp;
                k++;

            }
        }
}


int main(){
    int size=6;
    int arr[]={3,2,6,3,1,4};
    merge_sort(size,arr);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}