// Write a program that reads a file named "Numbers.txt" containing whole number values, and displays the count
// of even and odd numbers present within the file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("Numbers.txt", ios::in);
    if (!myfile.is_open())
    {
        cout << "Error! Missing or cant find the file." << endl;
        return 1;
    }

    int number, evenCount = 0, oddCount = 0;

    while (myfile >> number)
    {
        if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    myfile.close();
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd Numbers: " << oddCount << endl;
}
