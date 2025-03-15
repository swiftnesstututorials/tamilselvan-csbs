#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Declare the friend function
    friend void calculateAndDisplayArea(const Circle& c);
};

// Friend function to calculate and display the area
void calculateAndDisplayArea(const Circle& c) {
    double area = 3.14159 * c.radius * c.radius; // Area formula: πr²
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    // Create a Circle object
    Circle circle(5.0); // Radius = 5.0

    // Call the friend function to calculate and display the area
    calculateAndDisplayArea(circle);

    return 0;
}
