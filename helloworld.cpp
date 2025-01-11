#include <iostream>
using namespace std;

// Class demonstrating abstraction with getters and setters
class BankAccount
{
private:
    double balance; // Private attribute, hidden from outside access

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0;
            cout << "Invalid initial balance. Setting balance to 0." << endl;
        }
    }

    // Getter: Provides read-only access to the balance
    double getBalance()
    {
        return balance;
    }

    // Setter: Allows controlled modification of the balance
    void setBalance(double amount)
    {
        if (amount >= 0)
        {
            balance = amount;
        }
        else
        {
            cout << "Invalid amount. Balance cannot be negative." << endl;
        }
    }

    // Method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};

int main()
{
    // Create a BankAccount object with an initial balance
    BankAccount account(500);

    // Access balance using the getter
    cout << "Current Balance: $" << account.getBalance() << endl;

    // Attempt to set a new balance using the setter
    account.setBalance(1000);
    cout << "Updated Balance: $" << account.getBalance() << endl;

    // Deposit and withdraw operations
    account.deposit(250);
    cout << "Balance after deposit: $" << account.getBalance() << endl;

    account.withdraw(300);
    cout << "Balance after withdrawal: $" << account.getBalance() << endl;

    // Attempt to set an invalid balance
    account.setBalance(-500); // Should trigger validation in setter

    return 0;
}
