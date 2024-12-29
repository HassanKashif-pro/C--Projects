#include <iostream>

int main()
{
    // 2D arrays = an array made up of multiple arrays as elements
    // They help in representing a grid or matrix of data.

    std::string cars[3][4] = {{"Mustang", "Escape", "F-150"},
                              {"Corvette", "Equinox", "Silverado"},
                              {"Challenger", "Durango", "Ram 1500"}}; // 3 rows and 4 columns

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) // This is how to iterate over a 2D array
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}