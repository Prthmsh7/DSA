#include<iostream>
using namespace std;
//understanding the concept of pass by value and pass by reference in functions

//pass by value
void add(int n){
    cout<<n<<endl;
    n=+5;
}
//pass by reference
void sub(int &n){
    cout<<n<<endl;
    n=-5;
}

//driver code
int main(){
    int a=10;
    add(a);
    cout<<a<<endl;
    sub(a);
    cout<<a<<endl;
    return 0;
}