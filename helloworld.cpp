#include <iostream>

int main()
{
    // Dynamic memory that is allocated after the program
    // is already compiled & running.
    // Use the 'new' operator to allocate
    // memory on the heap.
    //
    //  Useful when u are unsure of how much memory we will
    //  need. Makes our program more flexible.

    int *pNum = NULL;
    char *pGrades = NULL;
    int size;

    pNum = new int; // This is how to allocate your memory to the heap and not the stack.

    *pNum = 20; // store any kind of data afterwards

    std::cout << "How many grades are there?: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    delete pNum; // You need to clear the memory manually afterwards to
                 // avoid memory leaks. use 'delete' whenever you use 'new'.

    return 0;
}
