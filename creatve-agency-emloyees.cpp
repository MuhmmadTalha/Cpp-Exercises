/*Task: Assume a creative agency that contains the following classes. Create a base class 'Employee' that
    contains some data members to solve the common employees details such as 'empID', 'empName', and 'empRole'.
    This class should also have the function 'displayInfo()' to display the employee basic details.

Then create two derived classes:
1. 'GraphicDesigner': This class will inherit from 'Employee' and add a data member 'designSoftware' to store
    the primary design software they use (e.g., Photoshop, Illustrator, etc.). The 'GraphicDesigner' class should
    also have a 'displayInfo()' function that overrides the base class function to include the software the specialze in,
    as well as a method 'estimatedProjectCost()' to estimate the cost of a design project based on hours and hourly rate.

2. 'CopyWriter': This class will also inherit from 'Employee' and add a data member 'writingStyle' to store
    the writing style or type of content they speialze in (e.g., creative, technical, SEO - focused).
    The 'CopyWriter' classshould ovveride the 'displayInfo()' to include their writing style and have a method 'estimatedProjectCost()'
    that calculates the project cost based on number of words written and a per-word rate.


Both derived classed will implement their own version of the 'estimatedProjectCost()' function, allowing them to
    calculate project costs based n thier specific work type (design for the 'GraphicDesigner' and writing for the 'CopyWriter')

At the end create a 'main()' function to instantiate objects of both 'GraphicDesigner' and 'CopyWriter',
    and display their information, including the estimated project cost for a given project.

Note: You can assume any value for per_word and hourly_rate. */

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string empID;
    string empName;
    string empRole;

public:
    Employee(string ei, string en, string er) : empID(ei), empName(en), empRole(er) {}

    void displayInfo()
    {
        cout << "Employee Details: \n";
        cout << "Employee Id is: " << empID << endl;
        cout << "Employe Name is: " << empName << endl;
        cout << "Employee Role is: " << empRole << endl;
    }
};

class GraphicDesigner : public Employee
{
protected:
    string designSoftware;

public:
    GraphicDesigner(string ei, string en, string er, string ds) : Employee(ei, en, er), designSoftware(ds) {}

    void displayInfo()
    {
        Employee::displayInfo();
        cout << "Designing Software used: " << designSoftware << endl;
    }

    void estimatedProjectCost(float hoursWorked, float hourlyRate)
    {
        float cost = hoursWorked * hourlyRate;
        cout << "Estimated Project Cost: $" << cost;
    }
};

class CopyWriter : public Employee
{
protected:
    string writingStyle;

public:
    CopyWriter(string ei, string en, string er, string ws) : Employee(ei, en, er), writingStyle(ws) {}

    void displayInfo()
    {
        Employee::displayInfo();
        cout << "Writing Style: " << writingStyle;
    }

    float estimatedProjectCost(int numberofWords, float wordperRate)
    {
        float cost = numberofWords * wordperRate;
        cout << "Estimated Project Cost: $" << cost;
    }
};

int main()
{
    GraphicDesigner g1("bot123", "bot1", "Graphic Designer", "Photoshop");
    g1.displayInfo();
    g1.estimatedProjectCost(5.2, 2.8);

    cout << endl;
    cout << endl;

    CopyWriter c1("bot321", "bot2", "Copy Writer", "Creative");
    c1.displayInfo();
    c1.estimatedProjectCost(980, 0.2);
    return 0;
}