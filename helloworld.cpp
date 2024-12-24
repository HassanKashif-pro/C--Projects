#include <iostream>
#include <string> // For std::string

int main()
{
    std::string name;
    int age;

    std::cout << "What's Your Age? ";
    std::cin >> age;

    std::cout << "What's your name? ";
    std::getline(std::cin >> std::ws, name); // Get line is used to get the whole line with white spaces.

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
