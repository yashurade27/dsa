#include<iostream>
using namespace std;

//WAP to print odd numbers from 1 to 100

int main() {
    for(int i=1; i<=100; i++) {
        if(i%2!=0) cout<<i<<endl;
    }

    // for(int i=1; i<=10; i++) {
    //     if(i%2==0) continue;
    //     cout<<i<<endl;
    // }
}