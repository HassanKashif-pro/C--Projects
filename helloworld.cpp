#include <iostream>
using namespace std;

// Base class (Parent)
class Animal
{
public:
    void eat()
    {
        cout << "This animal is eating." << endl;
    }

    void sleep()
    {
        cout << "This animal is sleeping." << endl;
    }
};

// Derived class (Child) inheriting from Animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog is barking." << endl;
    }
};

int main()
{
    // Create an object of the derived class
    Dog myDog;

    // Inherited methods from the Animal class
    myDog.eat();   // Output: This animal is eating.
    myDog.sleep(); // Output: This animal is sleeping.

    // Method from the Dog class
    myDog.bark(); // Output: The dog is barking.

    return 0;
}
