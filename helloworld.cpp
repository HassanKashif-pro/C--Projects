#include <iostream>

int main()
{
    // arrays = are data structure that can hold multiple values
    //          values are accessed by an index number
    //          "kinda like a variable which holds multiple values"

    std::string car[] = {"Corvette",
                         "Camry",
                         "Suzuki"}; // it should be of the same data type like string..number

    std::string flower[1]; // You must assign the size of the array

    flower[0] = "Rose"; // you can assign values after the decelerations of the array
    flower[1] = "Tulip";

    car[0] = "Corolla"; // This is used to rename the elements in the array.

    std::cout << car[1]; // this will print the index 1 element in the array
    std::cout << car;    // this will show the memory location of this array.
}