// Define a class for a bank account that includes the following data members:
// • Name of account holder
// • Account Number
// • Balance amount in the account
// The class also contains the following member functions:
// ✓ A constructor to assign initial values.
// ✓ Overload + operator that adds the balance of one account to another account.
// ✓ Overload ‘<=’ operator to compare the balance of two accounts.

#include <iostream>
#include <string>
using namespace std;

class bank
{
private:
    string name;
    int accountNumber;
    float balance;

public:
    bank(string n, int an, float b) : name(n), accountNumber(an), balance(b) {}

    bank operator+(bank &b2)
    {
        return bank(name, accountNumber, balance + b2.balance);
    }

    bool operator<=(bank &b2)
    {
        return balance <= b2.balance;
    }

    void display()
    {
        cout << "Account Hold: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    bank b1("bot1", 0001, 34.9);
    bank b2("bot2", 0002, 345.4);

    bank b3 = b2 + b1;

    cout << "Account 1 Details: " << endl;
    b1.display();

    cout << "\nAccount 2 Details: " << endl;
    b2.display();

    return 0;
}
