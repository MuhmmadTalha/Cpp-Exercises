// Vehicle Hierarchy:
// Create a base class Vehicle with an attribute maxSpeed. Derive classes Car and Truck
// using virtual inheritance. Create a derived class HybridVehicle that inherits from both
// Car and Truck. Write a program to ensure there is no duplication of the maxSpeed
// attribute and display details of a HybridVehicle.

#include <iostream>
using namespace std;

class Vehicle
{
public:
    int maxSpeed;

    Vehicle(int speed) : maxSpeed(speed) {}
};

class Car : public virtual Vehicle
{
public:
    Car(int speed) : Vehicle(speed) {}
};

class Truck : public virtual Vehicle
{
public:
    Truck(int speed) : Vehicle(speed) {}
};

class HybridVehicle : public Car, public Truck
{
public:
    HybridVehicle(int speed) : Vehicle(speed) {} // Only need to initialize Vehicle
    void displaySpeed()
    {
        cout << "HybridVehicle maxSpeed: " << maxSpeed << " km/h" << endl;
    }
};

int main()
{
    HybridVehicle hv(120);

    hv.displaySpeed();

    return 0;
}
