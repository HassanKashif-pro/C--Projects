#include <iostream>
#include <cmath>

int main()
{
    // if statements in C++

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are an adult.";
    }
    else if (age <= 0)
    {
        std::cout << "You are not born yet.";
    }
    else
    {
        std::cout << "You are a minor.";
    }
}
