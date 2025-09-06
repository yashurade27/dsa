#include<iostream>
using namespace std;


//WAP to count digit of a given number

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 1;
    while(n=n/10) {
        count++;
    }

    cout<<"Total digits are: "<<count;
}