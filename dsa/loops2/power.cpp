#include<iostream>
using namespace std;

//2 numbers are entered . Write a program to find value of one num 
// raised to power of another

//a to the power b
int main() {
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int result = 1;
    for(int i=1;i<=b; i++){
        result *= a;
    }
    cout<<"a^b is :"<<result<<endl;

}

// 4^3=> 4 X 4 X 4 