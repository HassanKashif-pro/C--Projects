#include <iostream>

int main()
{
    // sizeof() = used to find the size of a variable, data type, class
    //              or object in bytes...

    std::string name = "Ma N"; // always 32 bytes bcz it is the locations size
    double pi = 20.1;
    char grade = 'F'; // 1 byte
    std::string students[] = {"Ali", "Hassan", "Jack"};

    std::cout << sizeof(students) / sizeof(std::string) << "elements\n"; // This is a trick
    // to find the size of an array using sizeof

    std::cout << sizeof(name) << " Bytes";
}