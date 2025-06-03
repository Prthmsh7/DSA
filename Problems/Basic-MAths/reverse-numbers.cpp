//Q2. Reverse a number

#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cout<<"Enter the number that you want to reverse : ";
    cin>>n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}
