#include <iostream>
using namespace std;

int main() {
    int a, b;
    int choice;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    do {
        cout << "\nEnter the choice (1. Add, 2. Sub, 3. Mul, 0. Exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Add is: " << a + b << endl;
                break;

            case 2:
                cout << "Sub is: " << a - b << endl;
                break;

            case 3:
                cout << "Mul is: " << a * b << endl;
                break;

            case 0:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid input!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
