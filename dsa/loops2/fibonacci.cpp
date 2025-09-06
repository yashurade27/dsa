#include<iostream>
using namespace std;


int fibo(int n) {
    if(n==1 || n==2 ) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main() {
    cout<<fibo(8);
}


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a = 1, b=1, sum=0;
    for(int i=1; i<=n-2; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<b;
}