//Display Fibonacci Series Upto n terms
#include <iostream>
using namespace std;

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;
    int i = 0;

    cout << "Enter no. of terms for Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series upto " << n << " terms: " << endl;

    while (i < n)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
        ++i;
    }
    return 0;
}
