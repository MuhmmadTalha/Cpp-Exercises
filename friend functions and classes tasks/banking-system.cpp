/*Task 5 :
Title: Banking System with Friend Classes
Problem Statement:
Create two classes, Account and Bank. The Account class has the following private members:
balance (stores the account balance).
accountNumber (stores the account number).
The Bank class is a friend of Account and has functions to:
Deposit an amount into the account.
Withdraw an amount from the account.
Display the current account details (account number and balance).
Write a program to simulate deposit and withdrawal operations using these classes. Handle
scenarios where withdrawal amounts exceed the balance.
*/
#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accountNumber;
    float balance;

public:
    Account(int an, float b) : accountNumber(an), balance(b) {}

    friend class Bank;
};

class Bank
{
public:
    void deposit(Account &a, float cash)
    {
        a.balance += cash;
        cout << "$" << cash << " has been added into your account." << endl;
    }

    void withdraw(Account &a, float cash)
    {
        if (cash > a.balance)
            cout << "Insufficent balance withdrawl." << endl;

        else
        {
            a.balance -= cash;
            cout << "$" << cash << " has been deducted from your account." << endl;
        }
    }

    void displayInfo(Account &a)
    {
        cout << "Account Number: " << a.accountNumber << endl;
        cout << "Current Balance: $" << a.balance << endl;
    }
};

int main()
{
    Account a1(123, 1000);
    Bank b1;

    b1.displayInfo(a1);
    b1.deposit(a1, 500);
    b1.withdraw(a1, 200);
    b1.withdraw(a1, 2000);
    return 0;
}
