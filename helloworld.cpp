#include <iostream>

using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "_________CALCULATOR__________" << "\n";

    cout << "Enter and operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter number one: ";
    cin >> num1;

    cout << "Enter number two: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        cout << "result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        cout << "result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        cout << "result: " << result << "\n";
        break;
    default:
        cout << "Please Enter a Valid Operator.";
        break;
    }

    cout << "_____________________________";
}