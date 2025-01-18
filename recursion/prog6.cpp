#include<bits/stdc++.h>
using namespace std;

void func(string a, int b){
	cout<<a<<endl;
	b--;
	if(b!=0) func(a,b);
}

int main(){
	string a;
	int b;

	cout<<"Enter the name that you want to print"<<endl;
	cin>>a;

	cout<<"Enter the number of times :"<<endl;
	cin>>b;

	func(a,b);
	return 0;
}