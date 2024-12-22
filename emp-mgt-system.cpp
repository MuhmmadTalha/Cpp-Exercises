// Created a program to manage employee details using multiple inheritance.
// Define a base class `Person` with attributes like `name` and `age`, and a class `Worker` with details like `department` and `role`.
// Create a derived class `Employee` that inherits from both, adding attributes for `employeeID` and `salary`.

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    void inputPersonalDetails()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Worker
{
protected:
    string dept;
    string role;

public:
    Worker() : dept("testing"), role("Subject") {}

    void inputWorkerDetails()
    {
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter Role: ";
        cin >> role;
    }
};

class Employee : public Person, public Worker
{
protected:
    string employeeID;
    float salary;

public:
    Employee() : employeeID("botx0123"), salary(0.0001) {}

    void inputEmployeeDetails()
    {
        inputPersonalDetails();
        inputWorkerDetails();

        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void displayDetails()
    {
        cout << "\n--- Employee Profile ---" << endl;
        cout << "Name of Employee: " << name << endl;
        cout << "Age of Employee: " << age << endl;
        cout << "Department of Employee: " << dept << endl;
        cout << "Role of Employee: " << role << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary of Employee: " << salary << endl;
    }
};

int main()
{
    Employee emp;
    emp.inputEmployeeDetails();
    emp.displayDetails();
}
