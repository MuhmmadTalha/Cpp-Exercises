/*Task 1: Access Private Members of a Class Using a Friend Function
Create a class Student with private attributes name and marks. Use a friend function to display
these private attributes*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;
    friend void displayInfo(const Student s);

public:
    Student(string n, int m) : name(n), marks(m) {}
};

void displayInfo(const Student s)
{
    cout << "Name of Student is: " << s.name << endl;
    cout << "Marks of Student is: " << s.marks << endl;
};

int main()
{

    Student s1("Muhammad Talha", 14);
    displayInfo(s1);

    return 0;
}