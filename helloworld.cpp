#include <iostream>
template <typename T, typename U>

// Use the 'auto' to show double dispatch

auto max(T x, U y) // This is a function template where you can
                   // set this type to T which is a lot of things like char, string, int...
{
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(1, 2.1) << '\n'; // Only accept all arguments of the same type .. inless you are using
    // different types like T and U
    return 0;
}
