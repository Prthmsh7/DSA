//To print 1 to N numbers 
#include<iostream>
using namespace std;

void func(int i, int a){
	cout<<i<<endl;
	if(i!=a) func(i+1,a);
}

int main(){
	int a;
	cout<<"Enter the number :"<<endl;
	cin>>a;
	func(1,a);
	return 0;
}