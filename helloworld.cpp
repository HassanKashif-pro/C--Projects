#include <iostream>

using namespace std;

int main()
{
    // Nested Loop and loops within other loops.
    int column;
    int row;
    char symbol;

    cout << "How many rows?: ";
    cin >> row;

    cout << "How many columns?: ";
    cin >> column;

    cout << "Enter a symbol";
    cin >> symbol;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << symbol << " ";
        }
        cout << "\n";
    }

    return 0;
}