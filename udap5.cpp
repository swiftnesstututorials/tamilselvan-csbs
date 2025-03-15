#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    bool isPrime = true;
    
    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) { // Outer loop
            for (int j = 2; j <= i; j++) {  // Inner loop (not necessary for prime check, but for demonstration)
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime) break;
        }
    }
    
    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    
    return 0;
}


