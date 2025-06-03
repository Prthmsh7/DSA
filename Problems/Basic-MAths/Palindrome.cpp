//Q3. Palindrome of a number

#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cout<<"Enter the number that you want to reverse : ";
    cin>>n;
    int i = n;
    while(i>0){
        rev=rev*10+i%10;
        i=i/10;
    }
    if(rev==n){
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not Palindrome";
    return 0;
}
