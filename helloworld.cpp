#include <iostream>

double square(double length);

int main()
{
    // return : returns a value back to the spot
    // where the function was called from

    double length = 5.1;
    double area = square(length);

    std::cout << "Area: " << area << std::endl;

    return 0;
}
double square(double length) // double is used instead of a void because we are returning a value of type double
{
    return length * length;
}