#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert to lowercase to handle uppercase inputs
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Vowel" << endl;
    } 
    // Check if it is an alphabet but not a vowel (i.e., consonant)
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << "Consonant" << endl;
    } 
    else {
        cout << "Invalid input! Please enter an alphabet." << endl;
    }

    return 0;
}

