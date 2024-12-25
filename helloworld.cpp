#include <iostream>
#include <cmath>

using namespace std;

void happyBirthday(std::string name, int age); // We need a function declaration because we are using it before it is defined

int main() // Function called should be written before the main function
{
    std::string name = "Hassan";
    int age = 21;

    happyBirthday(name, age); // Calling a function...call it as many times as you want

    return 0;
}
// function is a reuseable block of code

void happyBirthday(std::string name, int age) // you can make other functions be aware of variable by passing in as a variable.
{
    cout << "Happy Birthday to you!" << endl;
    cout << "Happy Birthday to you!" << endl;
}