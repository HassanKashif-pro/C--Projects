#include <iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    using namespace std; // provides a solution for preventing name conflicts in large projects.

    int x = 0;

    std::cout << second::x; // THis second :: is also known as the scoped resolution operator

    cout << x; // This will print 0 because we are using the std namespace and the variable x

    return 0;
}