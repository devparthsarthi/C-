#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
private:
    string depositorName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } 
        else 
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount <= 0) 
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance) 
        {
            cout << "Insufficient funds. Withdrawal denied." << endl;
        }
        else 
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "Remaining Balance: $" << balance << endl;
        }
    }

    void displayAccountInfo() 
    {
        cout << "\n--- Account Information ---" << endl;
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() 
{
    BankAccount account("John Doe", 12345, 1000.0);

    account.displayAccountInfo();
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(2000);

    return 0;
}
