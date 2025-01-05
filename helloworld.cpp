#include <iostream>

// struct = A structure that group related variables under one name.

struct Car
{
    int year;
    std::string model;
    std::string color;
};
void printCar(Car &car);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 1999;
    car1.color = "red";

    car2.model = "GTR";
    car2.year = 2020;
    car2.color = "blue";

    std::cout << &car1 << '\n'; // This will print the memory address of car1
    // which is not same as the one on line 33
    printCar(car1); // Structs are pass by value
    printCar(car2); // Structs are pass by value

    return 0;
}
void printCar(Car &car) // you need to add address-of to give the same
// memory address to the function
{
    std::cout << &car << '\n';
    std::cout << "Model: " << car.model << std::endl;
}