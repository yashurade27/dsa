#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    for(int i=2; i<=n-1; i++) {
        if(n%i==0){
            cout<<"Entered number is not a prime";
            break;
        }
        else {
            cout<<n<<"Enter number is Prime";
            break;
        }
        
    }
    
}