#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor to initialize Box dimensions
    Box(double l, double b, double h) : length(l), breadth(b), height(h) {}

    // Friend function to compare volumes of two Box objects
    friend void compareVolumes(const Box& box1, const Box& box2);
};

// Friend function to compare the volumes
void compareVolumes(const Box& box1, const Box& box2) {
    double volume1 = box1.length * box1.breadth * box1.height;
    double volume2 = box2.length * box2.breadth * box2.height;

    cout << "Volume of Box 1: " << volume1 << endl;
    cout << "Volume of Box 2: " << volume2 << endl;

    if (volume1 > volume2) {
        cout << "Box 1 has a larger volume." << endl;
    } else if (volume1 < volume2) {
        cout << "Box 2 has a larger volume." << endl;
    } else {
        cout << "Both boxes have the same volume." << endl;
    }
}

int main() {
    // Create two Box objects
    Box box1(3.0, 4.0, 5.0); // Dimensions: 3x4x5
    Box box2(4.0, 3.0, 5.0); // Dimensions: 4x3x5

    // Compare their volumes
    compareVolumes(box1, box2);

    return 0;
}


