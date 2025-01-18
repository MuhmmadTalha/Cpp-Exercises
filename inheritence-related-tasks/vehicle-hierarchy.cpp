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
    HybridVehicle(int speed) : Vehicle(speed), Car(speed), Truck(speed) {}
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
