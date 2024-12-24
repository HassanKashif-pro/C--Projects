#include <iostream>

int main()
{
    int month;

    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
        {
        case 2:
            std::cout << "It is February";
            break;

        default:
            std::cout << "And So on just like that";
            break;
        }
    }
}