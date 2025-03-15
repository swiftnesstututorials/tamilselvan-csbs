#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string brand;

public:
    // Constructor for Vehicle
    Vehicle(string b) : brand(b) {
        cout << "Vehicle initialized with brand: " << brand << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
protected:
    int doors;

public:
    // Constructor for Car
    Car(string b, int d) : Vehicle(b), doors(d) {
        cout << "Car initialized with " << doors << " doors." << endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
protected:
    string type;

public:
    // Constructor for Bike
    Bike(string b, string t) : Vehicle(b), type(t) {
        cout << "Bike initialized of type: " << type << endl;
    }
};

// Derived class Garage (inheriting from both Car and Bike)
class Garage : public Car, public Bike {
private:
    string location;

public:
    // Constructor for Garage
    Garage(string carBrand, int d, string bikeBrand, string t, string loc)
        : Car(carBrand, d), Bike(bikeBrand, t), location(loc) {
        cout << "Garage initialized at location: " << location << endl;
    }

    // Method to display all information
    void displayInfo() {
        cout << "\nGarage Details:" << endl;
        cout << "Car Brand: " << Car::brand << ", Doors: " << doors << endl;
        cout << "Bike Brand: " << Bike::brand << ", Type: " << type << endl;
        cout << "Location: " << location << endl;
    }
};

int main() {
    // Create a Garage object with data from all levels
    Garage garage("Toyota", 4, "Yamaha", "Sport", "Downtown");

    // Display the details of the Garage
    garage.displayInfo();

    return 0;
}

