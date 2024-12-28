#include <iostream>

int main()
{
    std::string students[] = {"Bob", "Sandy", "Jack", "Micheal"};

    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) // This is a good way of printing out all the elements in an array
    {
        std::cout << students[i] << "\n";
    } // iterating over an array using for loop and sizeof()

    return 0;
}