// Check Whether entered number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;

    cout << "Enter a number to check whether its 'Prime' or 'Composite': ";
    cin >> n;

    for (i = 2; i < n - 1; i++) // alternate condition which can be used is: i <= n/2
    {
        if (n % i == 0)
        {
            cout << "Composite";
            return 0;
        }
    }
    cout << "Prime";

    return 0;
}
