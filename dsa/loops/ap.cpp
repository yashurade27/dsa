#include <iostream>
using namespace std;

//display AP: -1, 3, 5, 7, 9 ... upto 'n' terms

int main() {
    int a, b, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the first term: ";
    cin>>a;
    cout<<"Enter the difference: ";
    cin>>b;

    for(int i=0; i<n; i++) {
        cout<<a<<endl;
        a = a + b;
    }


}
