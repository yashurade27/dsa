#include <iostream>
using namespace std;


int main() {
    int a, n, r ;
    cout<<"Enter the 1st term: ";
    cin>>a;
    cout<<"Enter the ratio(r): ";
    cin>>r;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        cout<<a<<endl;
        a = a*r;
    }
}