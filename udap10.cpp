#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) { // Outer loop for rows
        for (int j = 1; j <= i; ++j) { // Inner loop for stars
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}




