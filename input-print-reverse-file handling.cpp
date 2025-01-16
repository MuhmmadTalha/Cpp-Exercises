// Write a program to input 10 values of type double from keyboard and write them in a text file, called “Elements.txt”.
// Read the same file and display all the data in reverse order.
// Hint: Use an array to store values read from the file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int size = 10;
    double numbers[size];

    ofstream outFile("C:/Users/M.TALHA/Documents/Elements.txt");
    if (!outFile)
    {
        cout << "Error cant find or open file." << endl;
        return 1;
    }

    cout << "Enter 10 double values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        outFile << numbers[i] << " ";
    }
    outFile.close();

    // Read from file into array
    ifstream infile;
    infile.open("C:/Users/M.TALHA/Documents/Elements.txt", ios::in);
    if (!infile.is_open())
    {
        cout << "Error cant find or open file." << endl;
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        infile >> numbers[i];
    }
    infile.close();

    cout << "\nNumbers in Reverse Order: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
