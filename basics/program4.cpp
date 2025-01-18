//Program to understand pass by value and pass by reference
#include<bits/stdc++.h>
using namespace std;

void NumberIncrease_PassbyValue(int x){
	x = x + 1;
	cout << x << endl;
}

void NumberIncrease_PassbyReference(int &x){
	x = x + 1;
	cout << x << endl;
}

int main(){
	int x;
	cout<<"Enter a number : \n ";
	cin>>x;

	cout<<"\nOriginal value of x dosnt change after using the first function\n";
	NumberIncrease_PassbyValue(x);

    cout<<"\nOriginal value of x changes directly\n";
	NumberIncrease_PassbyReference(x);

	cout<<"\nThe changed value of x can be seen\n";
	NumberIncrease_PassbyValue(x);
	return 0;
}
