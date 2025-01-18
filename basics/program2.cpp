//This is a basic program to take the userinput from the user for his age and print his name and age in the end of this program
//note that to take the user input for a sting or store the variables as stings , we need to import the library as #include<string> so that we can use strings in our programs

#include<bits/stdc++.h>
// #include<iostream>
// #include<string>

//using bits/stdc++.h library does more convenient thing as it includes almost all the standard libraries in itself

using namespace std;
int main(){


	int age;  //declaring variables
	string name;

	cout<<"Enter your name : \n";
	cin>>name;  //taking user input for the name

	cout<<"Enter your age : \n";
	cin>>age;	//taking user input for the age

	cout<<"Your name is : "<<name<<"\nYour age is : "<<age<<endl;
	
	return 0;
}