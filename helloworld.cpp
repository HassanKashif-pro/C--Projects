#include <iostream>

using namespace std;

int main()
{

    string name;
    while (name.empty()) // a While loop runs the code until the condition remains True When it is False it is stopped.
    {
        cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    cout << "Hello, " << name << endl;

    while (1 == 1)
    {
        cout << " HELP ME ! ";
    }

    return 0;
}