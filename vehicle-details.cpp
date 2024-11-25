// Designed a vehicle tracking system using inheritance.
// Create a `Vehicle` class with properties for `make` and `model`.Extend it with a `Car` class that adds `fuel type` and `seating capacity`.
// Further, create an `ElectricCar` class inheriting from `Car`, adding `battery capacity` and `charging time`.

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string make;
    string model;

public:
    Vehicle() : make(""), model("") {}

    void inputVehicleDetails()
    {
        cout << "Enter Make of the Vehicle: ";
        cin >> make;
        cout << "Enter Model of the Vehicle: ";
        cin >> model;
    }

    void displayVehicleDetails()
    {
        cout << "Make of the Vehicle: " << make << endl;
        cout << "Model of the Vehicle: " << model << endl;
    }
};

class Car : public Vehicle
{
protected:
    string fuelType;
    int seatingCapacity;

public:
    Car() : fuelType(""), seatingCapacity(0) {}

    void inputCarDetails()
    {
        inputVehicleDetails();
        cout << "Enter Fuel Type of the Car: ";
        cin >> fuelType;
        cout << "Enter Seating Capacity of the Car: ";
        cin >> seatingCapacity;
    }

    void displayCarDetails()
    {
        displayVehicleDetails();
        cout << "Fuel Type of the Car: " << fuelType << endl;
        cout << "Seating Capacity of the Car: " << seatingCapacity << endl;
    }
};

class ElectricCar : public Car
{
protected:
    float batteryCapacity;
    float chargingTime;

public:
    ElectricCar() : batteryCapacity(0.0f), chargingTime(0.0f) {}

    void inputElectricCarDetails()
    {
        inputCarDetails();
        cout << "Enter Battery Capacity of the Electric Car (in kWh): ";
        cin >> batteryCapacity;
        cout << "Enter Charging Time of the Electric Car (in hours): ";
        cin >> chargingTime;
    }

    void displayElectricCarDetails()
    {
        displayCarDetails();
        cout << "Battery Capacity of the Electric Car: " << batteryCapacity << " kWh" << endl;
        cout << "Charging Time of the Electric Car: " << chargingTime << " hours" << endl;
    }
};

int main()
{
    ElectricCar ec;
    ec.inputElectricCarDetails();
    ec.displayElectricCarDetails();

    return 0;
}
