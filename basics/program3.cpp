// This is the program that we're writing to understand switch case statment

#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cout<<"Enter a number so that we can understand the use of Switch case : \n";
	cin>>x;
	switch(x){
	case 1 : 
		cout << "The number is equal to 1";
		break;

	case 2 :
		cout << "The number is equal to 2";
		break;

	default :
		cout << "The number is not equal to both 1 and 2";


	}
	return 0;
}