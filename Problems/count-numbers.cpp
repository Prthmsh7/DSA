//Q1. Count the digits

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number";
    cin>>n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count<<endl;
    return 0;
}

//2nd Approach -----

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin>>n;
    int cnt = (int)(log10(n)+1);
    cout << "Number of Digits : "<< cnt << endl;
    return 0;
}
