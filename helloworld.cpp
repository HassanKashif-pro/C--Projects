#include <iostream>

int main()
{
    // The const keyword is used to declare a constant variable.

    const double PI = 3.14159;
    double radius = 5.0;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    const int x = 10;

    return 0;
}