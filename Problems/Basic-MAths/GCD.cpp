//Q4. GCD of two numbers
//approach 1-

#include <iostream>
using namespace std;
int main(){
    int a,b;
    int gcd;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    for(int i = 1;i<=a;i++){
        if(a%i==0){
            if(b%i==0){
                gcd=i;
            }
        }
    }
    cout<<gcd;
    return 0;
}

//approach 2 -

#include <iostream>
#include <algorithm>
using namespace std;
int findGcd(int n1, int n2) {

    for(int i = min(n1, n2); i > 0; i--) {
        if(n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n1, n2;
    cout<<"Enter the first number";
    cin>>n1;
    cout<<"Enter the second number";
    cin>>n2;
    int gcd = findGcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}

//Optimal approach -

#include <iostream>
#include <algorithm>
using namespace std;

int findGcd(int a, int b) {

    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}

int main() {
    int n1,n2;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    int gcd = findGcd(n1, n2);
    cout << gcd << endl;
    return 0;
}
