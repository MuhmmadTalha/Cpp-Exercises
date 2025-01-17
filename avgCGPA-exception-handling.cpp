// Create a program that includes a function named AvgCGPA(float c1, float c2) designed to calculate the
// average CGPA. This function throws exceptions under specific conditions: if the value of c1 or c2 is less
// than zero, it will generate an exception displaying "Invalid Value: GPA can't be negative." Similarly, if
// the value of c1 or c2 exceeds 4, another exception will be triggered, presenting the message "Invalid
// Value: Above 4 GPA is not acceptable." The function will return the CGPA only if the values of c1 and
// c2 fall within the acceptable range of 0-4

#include <iostream>
#include <string>
using namespace std;

float AvgCGPA(float c1, float c2)
{
    if (c1 < 0 || c2 < 0)
    {
        throw string("Invalid Value: GPA can't be negative.");
    }

    if (c1 > 4 || c2 > 4)
    {
        throw string("Invalid Value: Above 4 GPA is not acceptable.");
    }

    return (c1 + c2) / 2;
}
int main()
{
    float cgpa1;
    float cgpa2;

    cout << "Enter CGPA1 and 2: ";
    cin >> cgpa1 >> cgpa2;

    try
    {
        float avg = AvgCGPA(cgpa1, cgpa2);
        cout << "Average CGPA: " << avg << endl;
    }
    catch (const string &msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
