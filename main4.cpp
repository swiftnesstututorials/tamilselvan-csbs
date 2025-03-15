#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    // Virtual method to be overridden by derived classes
    virtual void sound() const {
        cout << "Animals make sounds." << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override the sound() method
    void sound() const override {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

// Further derived class Puppy
class Puppy : public Dog {
public:
    // Puppy-specific method
    void play() const {
        cout << "Puppy is playing with a ball!" << endl;
    }

    // Override the sound() method
    void sound() const override {
        cout << "Puppy barks: Yip Yip!" << endl;
    }
};

int main() {
    // Create objects of all levels
    Animal animal;
    Dog dog;
    Puppy puppy;

    // Demonstrate method calls from all levels
    cout << "Animal's sound:" << endl;
    animal.sound(); // Calls Animal's sound()

    cout << "\nDog's sound:" << endl;
    dog.sound(); // Calls Dog's sound()

    cout << "\nPuppy's sound and play:" << endl;
    puppy.sound(); // Calls Puppy's sound()
    puppy.play();  // Calls Puppy's play()

    return 0;
}
