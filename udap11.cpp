#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0) {
        if (number % 5 == 0) {
            cout << "Divisible by 3 and 5" << endl;
        } else {
            cout << "Divisible by 3 but not by 5" << endl;
        }
    } else {
        if (number % 5 == 0) {
            cout << "Divisible by 5 but not by 3" << endl;
        } else {
            cout << "Not divisible by 3 or 5" << endl;
        }
    }

    return 0;
}




