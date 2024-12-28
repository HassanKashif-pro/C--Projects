#include <iostream>

double getTotal(double prices[], int size);
int main()
{
    double prices[] = {21.32, 42.10, 40.5, 12.5};
    int size = sizeof(prices) / sizeof(double); // we cannot use the sizeof() in line 18 in the for loop
    // because when an array is passed in a function it is passed as a pointer so we have to give the size.
    double total = getTotal(prices);

    std::cout << "$" << total;

    return 0;
}
double getTotal(double prices[], int size) // you can pass an array as an argument.
{
    double total = 0;

    for (int i = 0; i < size; i++) // The size is used as the array is decayed as a pointer.
    {
        total += prices[i];
    }
    return total;
}