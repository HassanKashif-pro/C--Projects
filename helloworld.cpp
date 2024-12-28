#include <iostream>

int main()
{
    // for each = that ease the traversal over an iterable data set.

    int grades[] = {65, 43, 76, 89};

    for (int grade : grades)
    {
        std::cout << grade << "\n";
    }

    return 0;
}