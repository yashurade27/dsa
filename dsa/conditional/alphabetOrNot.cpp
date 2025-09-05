#include<iostream>
using namespace std;


int main() {
    cout<<"Enter a character : ";
    char a;
    cin>>a; 
    if((int(a)>=65 && int(a) <= 90) || (int(a)>=98 && int(a) <= 122)) {
        cout<<"Enter Character is an Alphabet";
    }
    else {
        cout<<"Enter Character is not an Alphabet";
    }
}