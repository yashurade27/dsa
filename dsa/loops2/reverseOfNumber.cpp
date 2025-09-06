#include<iostream>
using namespace std;

// WAP to print reverse of a given number

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int r = 0;
    while(n>0) {
        int lastDigit = n%10;
        r = r* 10 + lastDigit; 
        n/=10; 
    }
    cout<<"Reversed digit is :"<<r<<endl;
}

//9832 -> 2389

//Algorithm->
// n = 9832
// lastDigit = 0
// reverse(r) = 0

// steps:
// 1) r = r * 10
// 2) lastDigit
// 3)r += lastDigit
// 4) n /=10