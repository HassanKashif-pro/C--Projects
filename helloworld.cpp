#include <iostream>

void printNum(int myNum)

    int myNum = 2; // you can just make it a global variable.
// But using it too much will pollute the namespace.

int main()
{
    // Local variables = declared inside an function or a block()
    // Global variables = declared outside all function or a block()
    myNum = 1;
    printNum();
    return 0;
}
void printNum(int myNum) // if yuo want to use a local variable you have to add a identity to it
{
    std::cout << myNum << std::endl;
}