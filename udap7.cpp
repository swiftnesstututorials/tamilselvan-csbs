#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    
    // Reverse the number
    while (num > 0) {
        remainder = num % 10; // Get last digit
        reversedNum = reversedNum * 10 + remainder; // Append to reversed number
        num /= 10; // Remove last digit
    }
    
    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
    
    return 0;
}

