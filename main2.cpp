#include <iostream>
using namespace std;

// Class Rectangle
class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Declare AreaCalculator as a friend class
    friend class AreaCalculator;
};

// Class AreaCalculator
class AreaCalculator {
public:
    // Function to calculate area using private members of Rectangle
    double calculateArea(const Rectangle& rect) {
        return rect.length * rect.breadth;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(5.0, 3.0);

    // Create an AreaCalculator object
    AreaCalculator calculator;

    // Calculate and display the area of the rectangle
    cout << "The area of the rectangle is: " << calculator.calculateArea(rect) << endl;

    return 0;
}
