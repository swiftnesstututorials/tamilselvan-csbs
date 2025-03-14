#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    int smallest;
    
    if (a < b) {
        if (a < c)
            smallest = a;
        else
            smallest = c;
    } else {
        if (b < c)
            smallest = b;
        else
            smallest = c;
    }
    
    cout << "Smallest number: " << smallest << endl;
    return 0;
}

