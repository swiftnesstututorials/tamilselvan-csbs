#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        sum += number % 10; // Extract the last digit
        number /= 10;       // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}



