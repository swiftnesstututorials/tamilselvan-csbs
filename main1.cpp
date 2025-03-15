#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Display function for Person
    void displayPersonInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor to initialize all data members
    Student(string n, int a, int r) : Person(n, a), rollNumber(r) {}

    // Display function for Student
    void displayStudentInfo() const {
        displayPersonInfo();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Create a Student object
    Student student("John Doe", 20, 101);

    // Display the information
    student.displayStudentInfo();

    return 0;
}
