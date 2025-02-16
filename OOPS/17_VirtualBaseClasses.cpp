#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }

    void displayName() const {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1
class Student : virtual public Person {
public:
    Student(string n) : Person(n) {
        cout << "Student constructor called for " << name << endl;
    }
};

// Derived class 2
class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {
        cout << "Employee constructor called for " << name << endl;
    }
};

// Derived class from both Student and Employee
class WorkingStudent : public Student, public Employee {
public:
    WorkingStudent(string n) : Person(n), Student(n), Employee(n) {
        cout << "WorkingStudent constructor called for " << name << endl;
    }
};

int main() {
    WorkingStudent ws("Alice");

    // Call function from base class
    ws.displayName();

    return 0;
}
