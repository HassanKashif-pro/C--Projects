#include <iostream>

int main()
{

    // int is integers
    int x = 1;
    int y = 12;

    // double is decimal numbers
    double decimal = 12.2;
    double amount = 32.5;

    // char that is for single character
    char grade = 'A';
    char initial = 'B';

    // boolean that is (T or F)
    bool isTrue = true;
    bool isFalse = false;

    // string (objects that represent a sequence of text)
    std::string name = "John";
    std::string surname = "Doe";

    std::cout << surname << "\n";
    std::cout << "Hellow " << name << " How are you" << "\n";

    // cout means - character output
    std::cout << x + y << "\n";
    std::cout << decimal << "\n";
    std::cout << amount << "\n";

    return 0;
}