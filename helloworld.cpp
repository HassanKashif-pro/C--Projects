#include <iostream>

// struct = A structure that group related variables under one name.

struct helloworld
{
    std::string name;
    double gpa;
    bool enrolled;
};

int main()
{
    helloworld student;
    student.name = "John";
    student.gpa = 3.5;
    student.enrolled = true;

    std::cout << "Name: " << student.name << std::endl;

    return 0;
}
