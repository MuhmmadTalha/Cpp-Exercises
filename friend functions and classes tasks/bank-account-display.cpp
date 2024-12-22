/*Task 3: Updating Private Members Using a Friend Function
Create a class BankAccount with private attributes account_number and balance. Write a friend
function that can modify the balance attribute.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int account_number;
    float balance;

public:
    BankAccount() : account_number(0), balance(0.0) {} // default constructor

    friend void modifyBalance(BankAccount &ba); // not using const this time becasue we have to modify it later as asked in task
};

void modifyBalance(BankAccount &ba) // not using const this time becasue we have to modify it later as asked in task
{
    ba.account_number = 123;
    cout << "Account Number is: " << ba.account_number << endl;

    ba.balance = 0.00;
    cout << "Account Balance is: " << ba.balance << endl;
}

int main()
{
    BankAccount ba1;
    modifyBalance(ba1);
}