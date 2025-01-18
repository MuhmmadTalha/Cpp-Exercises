// . Device Management System:
// Create a base class Device with attributes modelName and brand. Derive classes Mobile and
// Laptop using virtual inheritance. Create a derived class SmartDevice inheriting from both
// Mobile and Laptop. Write a program to set and retrieve details of a SmartDevice.
#include <iostream>
using namespace std;

class Device
{
public:
    string modelName;
    string brand;
    Device(string mn = "", string b = "") : modelName(mn), brand(b) {}
};

class Mobile : virtual public Device
{
public:
    Mobile(string mn = "", string b = "") : Device(mn, b) {}
};

class Laptop : virtual public Device
{
public:
    Laptop(string mn = "", string b = "") : Device(mn, b) {}
};

class SmartDevice : public Mobile, public Laptop
{
public:
    SmartDevice(string mn = "", string b = "") : Device(mn, b), Mobile(mn, b), Laptop(mn, b) {}
    void displayDetails() const
    {
        cout << "Model Name: " << modelName << endl;
        cout << "Brand: " << brand << endl;
    }
};

int main()
{
    SmartDevice sd("iphone 17 pro max", "Apple");
    sd.displayDetails();

    return 0;
}
