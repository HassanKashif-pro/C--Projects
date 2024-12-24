#include <iostream>

using namespace std;

int main()
{
    // ternary operator ?= replacement to if/else statement
    // condition ? expression1 : expression 2;

    int grade = 75;
    int num;
    bool hungry;

    grade >= 70 ? std::cout << "Pass" << "\n" : std::cout << "Fail" << "\n";

    cout << "Write any number: ";
    cin >> num;

    num % 2 == 0 ? cout << "Even" : cout << "Odd";

    cout << (hungry ? "Your R hungry" : "Your R Full");

    return 0;
}