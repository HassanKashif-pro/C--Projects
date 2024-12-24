#include <iostream>

using namespace std;

int main()
{

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    name.length();             // This will return the length of the string name
    name.empty();              // This will check if the input is empty
    name.clear();              // This will clear the input on display
    name.append("@Gmail.com"); // This will append / add a string after the any input string
    name.at(0, 3);             // THis will return the character at the index while is specified
    name.insert(2, "@");       // This will insert a character at the specified index
    name.find(' ');            // This will return the index of the first occurrence of the specified character it can also be a space
    name.erase(0, 3);          // This will erase the characters from the specified index to the end of the string

    // MORE ON CPLUSPLUS.COM

    return 0;
}