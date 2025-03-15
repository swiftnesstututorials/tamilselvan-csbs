#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int a = 0, b = 1, next;
    
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number.";
        return;
    }
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    generateFibonacci(num);
    
    return 0;
}

