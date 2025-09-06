#include<iostream>
using namespace std;

//12-> 2, 3,4,6
//loop i=2 to n-1
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=n-1; i++) {
        if(n%i==0) {
            cout<<n<<" is a composite number"<<endl;
            break;
        }
    }
}