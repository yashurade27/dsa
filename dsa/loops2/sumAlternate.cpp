#include<iostream>
using namespace std;

//Print sum of this series: 1 -2 +3 -4 +5 -6 upto 'n'
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    if(n%2==0) sum = -(n/2);
    if(n%2!=0) sum = -n/2 + n;

    cout<<sum;
}

//-1 + -1 + -1 => -3 -(n/2)

//