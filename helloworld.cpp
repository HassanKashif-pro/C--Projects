#include <iostream>

int main()
{
    // pointers = variables that stores a memory address.
    // because sometimes it is just easier to use a pointer than to use a variable.

    // & address-of operator
    // * deference operator

    std::string name = "Ali";
    int age = 20;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // we don't need to use & when working with arrays

    std::cout << pName << "\n"; // Thi will give the address of the variable
    std::cout << *pName;        // This will print the value of the variable
    std::cout << *pAge;
    std::cout << pFreePizzas;

    return 0;
}
