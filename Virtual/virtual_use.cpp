#include <iostream>
using namespace std;

// Base class Animal with a virtual function
class Animal
{
    public:
    // This is a virtual function. It allows derived classes to override it.
    // When called through a base class pointer or reference, the derived class's version will be used.
    virtual void makeSound(){
        cout << "Animal makes a sound" << endl;
    }
};

// Base class Mammal without virtual functions
class Mammal
{
    public:
    // This is a regular function, not virtual. 
    // It cannot be overridden in the same way as virtual functions.
    void isMammal(){
        cout << "Mammal is a mammal" << endl;
    }
};

// Derived class Dog inherits from both Animal and Mammal
class Dog : public Animal, public Mammal
{
    public:
    // This function overrides the virtual function in Animal.
    // The 'override' keyword is optional but recommended for clarity.
    void makeSound() override{
        cout << "Dog makes a sound" << endl;
    }
    
    // This function hides the Mammal's isMammal function.
    // It does not override it because the base function is not virtual.
    void isMammal() {
        cout << "Dog is a mammal" << endl;
    }
};

int main()
{
    // Animal pointer to a Dog object
    // Calls Dog's makeSound because makeSound is virtual in Animal
    Animal* animal = new Dog();
    animal->makeSound();

    // Mammal pointer to a Dog object
    // Calls Mammal's isMammal because isMammal is not virtual
    Mammal* mammal = new Dog();
    mammal->isMammal();

    return 0;
}