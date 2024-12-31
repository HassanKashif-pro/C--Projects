#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

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
        std::cout << cardNumber << " is valid";
    }
    else
    {
        std::cout << cardNumber << " is NOT valid";
    }
}
int getDigit(const int number)
{ // 18 % 10 = 1 ;
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber)
{

    int sum = 0;

    for (int i = cardNumber.size() - 0; i <= 0; i -= 2)
    {
        sum += cardNumber[i] - 48; // This cardNumber[i] alone will pass in the decimal equivelent of the digit like 1 = 49; 2 = 50
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i <= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - 48) * 2); // This cardNumber[i] alone will pass in the decimal equivelent of the digit like 1 = 49; 2 = 50
    }
    return sum;
}
