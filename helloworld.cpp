#include <iostream>

void sort(int array[], int size);

int main()
{
    int array[] = {10,
                   2,
                   4,
                   5,
                   12,
                   11,
                   5};
    int size = sizeof(array) / sizeof(int);

    sort(array, size);

    for (int elements : array)
    {
        std::cout << elements << " ";
    }

    return 0;
}
void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}