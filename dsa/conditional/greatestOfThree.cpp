#include<iostream>
using namespace std;


int main() {
    cout<<"Enter 3 Positive digit number: ";
    int a, b, c;
    cin>>a>>b>>c;
    int max = -1;
    if(a>b && a>c) max = a;
    if(b>a && b>c) max = b;
    if(c>b && c>a) max = c;
    cout<<"Max number is: "<<max<<endl;
}