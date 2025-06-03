//Q5 Armstrong number

#include<bits/stdc++.h>
using namespace std;
void armstrong(int n, int digit){
    int temp = 0;
    int i = n;
    while(i>0){
        temp = temp + pow(i%10,digit);
        i = i/10;
    }
    if(temp == n) cout<<"true";
    else cout<<"false";
}

int main(){
    int n;
    int digit;
    cout<<"Enter the number : ";
    cin>>n;
    digit = (int)(log10(n)+1);
    armstrong(n,digit);
    return 0;
}
