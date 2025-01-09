#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;

    void eat()
    {
        std::cout << name << " is eating." << std::endl;
    }
    void drink()
    {
        std::cout << name << " is drinking." << std::endl;
    }
};

int main()
{
    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Created from a class which as a "Blue-print"

    Human human1;

    human1.name = "Rick";
    human1.occupation = "Teacher";
    human1.age = 31;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.drink();
    return 0;
}