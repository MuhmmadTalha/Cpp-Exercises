// Euclidean algorithm in C++

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int dividend, divisor;
    cout << "Enter two numbers for Euclidean algorithm: \n";
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    if (n1 > n2)
    {
        dividend = n1;
        divisor = n2;
    }

    else
    {
        dividend = n2;
        divisor = n1;
    }

    while (divisor != 0)
    {
        cout << "Dividing: " << dividend << " with " << "divisor " << divisor << endl;
        int remainder = dividend % divisor;
        cout << "Remainder: " << remainder << endl;

        dividend = divisor;
        divisor = remainder;

        if (remainder == 0)
        {
            cout << "Greatest Common Divisor is " << dividend << endl;
        }
    }

    return 0;
}