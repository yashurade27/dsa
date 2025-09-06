#include<iostream>
using namespace std;


// WAP to print sum of digits of a given number

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int sum = 0;
    int temp = n;
    while(temp>0) {
        int digit = temp%10;
        sum += digit;
        temp = temp/10;
    }
    
    cout<<"Sum is: "<<sum<<endl;
}

//573