#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter day number: ";
    cin>>x;
    switch (x) {
        case 1: 
            cout<<"Monday";
            break;
        case 2: 
            cout<<"Tues";
            break;
        case 3: 
            cout<<"Wed";
            break;
        case 4: 
            cout<<"Thurs";
            break;
        case 5: 
            cout<<"Fri";
            break;
        case 6: 
            cout<<"Sat";
            break;
        case 7: 
            cout<<"Sun";
            break;
        default: 
            cout<<"Not a proper day";
    }

}