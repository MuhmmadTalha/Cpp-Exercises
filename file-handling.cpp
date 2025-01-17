// Develop a program that attempts to open a file named "data.txt." It will raise a "File not Found" exception
// if the file does not exist, and the corresponding message will be displayed on the screen.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myFile("data.txt");

    if (!myFile.is_open())
    {
        cerr << "File not found" << endl;
        return 1;
    }
    cout << "File opened" << endl;
    myFile.close();

    return 0;
}
