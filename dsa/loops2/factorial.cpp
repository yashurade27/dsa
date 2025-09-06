#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==0 || n==1) return 1;
    return n* factorial(n-1);
}

int main() {
    int a;
    cout<<"Enter the number for which you want factorial: ";
    cin>>a;
    cout<<"Factorial is: "<<factorial(a);
}

// int product = 1;
// for(int i=1; i<=n; i++) {
//     product *= i;
// }

// cout<<product;