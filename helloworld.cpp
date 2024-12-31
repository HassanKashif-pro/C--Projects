#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string &cardNumber);
int sumEvenDigits(const std::string &cardNumber);

int main()
{
    // Program to verify a credit card number
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " is valid\n";
    }
    else
    {
        std::cout << cardNumber << " is NOT valid\n";
    }

    return 0;
}

int getDigit(const int number)
{
    // If the number is a two-digit number, return the sum of its digits
    return number % 10 + number / 10;
}

int sumOddDigits(const std::string &cardNumber)
{
    int sum = 0;

    // Start from the rightmost digit and process every odd-indexed digit
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0'; // Convert char to int
    }

    return sum;
}

int sumEvenDigits(const std::string &cardNumber)
{
    int sum = 0;

    // Start from the second-to-last digit and process every even-indexed digit
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2); // Convert char to int, double it, and sum the digits
    }

    return sum;
}
