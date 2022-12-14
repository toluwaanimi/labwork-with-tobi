// Animal class

#include <iostream>
#include "string"
#include "ostream"
using namespace std;
class Animal {
public:
    // Constructor
    Animal() {
        cout << "Animal created." << endl;
    }

    // Destructor
    ~Animal() {
        cout << "Animal destroyed." << endl;
    }

    // Method to make the animal move
    void move() {
        cout << "Animal is moving." << endl;
    }

    // Method to make the animal speak
    void speak() {
        cout << "Animal is speaking." << endl;
    }
};

// Dog class
class Dog : public Animal {
public:
    // Constructor
    Dog() {
        cout << "Dog created." << endl;
    }

    // Destructor
    ~Dog() {
        cout << "Dog destroyed." << endl;
    }

    // Method to make the dog move
    void move() {
        cout << "Dog is running." << endl;
    }

    // Method to make the dog speak
    void speak() {
        cout << "Woof! Woof!" << endl;
    }
};

// Cat class
class Cat : public Animal {
public:
    // Constructor
    Cat() {
        cout << "Cat created." << endl;
    }

    // Destructor
    ~Cat() {
        cout << "Cat destroyed." << endl;
    }

    // Method to make the cat move
    void move() {
        cout << "Cat is stalking." << endl;
    }

    // Method to make the cat speak
    void speak() {
        cout << "Meow! Meow!" << endl;
    }
};


class Trigger : public Animal {
public:
    // Constructor
    Trigger() {
        cout << "Trigger created." << endl;
    }

    // Destructor
    ~Trigger() {
        cout << "Trigger destroyed." << endl;
    }

    // Method to make the cat move
    void move() {
        cout << "Trigger is stalking." << endl;
    }

    // Method to make the cat speak
    void speak() {
        cout << "Meow! Meow!" << endl;
    }
};


class Horse : public Animal {
public:
    // Constructor
    Horse() {
        cout << "Horse created." << endl;
    }

    // Destructor
    ~Horse() {
        cout << "Horse destroyed." << endl;
    }

    // Method to make the cat move
    void move() {
        cout << "Horse is stalking." << endl;
    }

    // Method to make the cat speak
    void speak() {
        cout << "Meow! Meow!" << endl;
    }
};