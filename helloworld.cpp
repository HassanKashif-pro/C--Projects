#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));

    int num1 = (rand() % 100) + 1; // 100 is the max value for rand()
    int num2 = (rand() % 100) + 1; // + 1 is used to fix the problem that rand() returns 0 sometimes
    int num3 = (rand() % 100) + 1;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}