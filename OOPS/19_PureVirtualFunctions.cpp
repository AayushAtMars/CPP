#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;

    // Regular function
    void eat() const {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr; // Base class pointer

    Dog dog;
    Cat cat;

    // Point to Dog object
    animalPtr = &dog;
    animalPtr->sound(); // Calls Dog's sound()
    animalPtr->eat();   // Calls base class function

    // Point to Cat object
    animalPtr = &cat;
    animalPtr->sound(); // Calls Cat's sound()
    animalPtr->eat();   // Calls base class function

    return 0;
}
