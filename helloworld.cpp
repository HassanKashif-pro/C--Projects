#include <iostream>

using namespace std;

int main()
{
    double temp;
    char unit;

    cout << "--------TEMPERATURE CONVERTER--------" << endl;

    cout << "F is for Fahrenheit\n";
    cout << "C is for Celsius\n";
    cout << "K is for Kelvin\n";

    cout << "What Unit would you like to convert to?: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32;
        cout << "Temperature is " << temp << "F\n";
    }

    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature is " << temp << "C\n";
    }
    else if (unit == 'K' || unit == 'k')
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) * 5 / 9;
        cout << "Temperature is " << temp << "K\n";
    }

    cout
        << "-------------------------------------" << endl;

    return 0;
}