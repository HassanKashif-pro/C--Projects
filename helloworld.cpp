#include <iostream>
#include <iomanip>

void showBalance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {

        std::cout << "___________________\n";
        std::cout << "Enter your choice:\n";
        std::cout << "___________________\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // clears the input when invalid keywords like 'pizaa' is written down
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting out branch\n";
            break;
        default:
            std::cout << "Invalid Key bind";
            break;
        }
    } while (choice != 4);
}
void showBalance(double balance)
{
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << "\n";
}
double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficent funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That is not a valid amount";
        return 0;
    }
    else
    {
        return amount;
    }

    return 0;
}
double deposit()
{
    double amount = 0;

    std::cout << "Enter amount of deposit: ";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        return 0;
    }

    return amount;
}
