//This is a program that we're making to understand basics of recursion
#include<bits/stdc++.h>
using namespace std;

//to write a function so that it uses recursion to print a number n time

void func( int x, int y){
		
	//here x is the number
	//y is the number of times we have to print it

	cout<<x<<endl;
	y=y-1;
	if(y!=0) func(x,y);
}

int main(){
	int a,b;
	cout<<"Enter the number that you want to print";
	cin>>a;
	cout<<"Enter the number of times that you want to print that number";
	cin>>b;
	func(a,b);
	return 0;
}
