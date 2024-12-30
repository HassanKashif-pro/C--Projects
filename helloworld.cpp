#include <iostream>

void swap(std::string x, std::string y);
int main()
{
    // Pass by value
    // Pass by reference

    std::string x = "Kool-aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
// We can use '&' to pass by reference as memory location
void swap(std::string &x, std::string &y) // When we pass in variables as argument they are passed by value
                                          // meaning we create copies of the same element and do not pass the original one.
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}