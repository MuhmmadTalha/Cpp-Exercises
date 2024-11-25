// Created a Vehicle class with price and owner as data members. Derive two subclasses:

// Car: Adds seating_capacity and fuel_type (e.g., petrol or diesel).
// Bike: Adds fuel_consumption (distance per liter) and wheel_type (e.g., alloys or spokes).
// From these, derive two more subclasses:

// RacingCar (from Car): Includes a model data member.
// TouristBike (from Bike): Includes a model data member.
// Store and print details of a RacingCar (owner, price, seating capacity, fuel type, model) and a TouristBike (owner, price, fuel consumption, wheel type, model).

#include <iostream>
#include <string>
using namespace std;

class vehicle
{
protected:
    string owner;
    int price;

public:
    vehicle(string o, int p) : owner(o), price(p) {}
};

class Car : public vehicle
{
protected:
    int seating_capacity;
    string fuel_type;

public:
    Car(string o, int p, int sc, string ft) : vehicle(o, p), seating_capacity(sc), fuel_type(ft) {}
};

class Bike : public vehicle
{
protected:
    float fuel_consumption;
    string wheel_type;

public:
    Bike(string o, int p, float fc, string wt) : vehicle(o, p), fuel_consumption(fc), wheel_type(wt) {}
};

class RacingCar : public Car
{
protected:
    string model;

public:
    RacingCar(string o, int p, int sc, string ft, string m) : Car(o, p, sc, ft), model(m) {}

    void display()
    {
        cout << "Racing Car: " << endl;
        cout << "Name of Owner: " << owner << endl;
        cout << "Price of Racing Car: " << price << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Model of Racing Car: " << model << endl;
    }
};

class TouristBike : public Bike
{
protected:
    string model;

public:
    TouristBike(string o, int p, float fc, string wt, string m) : Bike(o, p, fc, wt), model(m) {}

    void display()
    {
        cout << "Tourist Bike: " << endl;
        cout << "Name of Owner: " << owner << endl;
        cout << "Price of Tourist Bike: " << price << endl;
        cout << "Fuel Consukption of Bike: " << fuel_consumption << endl;
        cout << "Wheel Type of Bike: " << wheel_type << endl;
        cout << "Model of Bike: " << model << endl;
    }
};

int main()
{
    RacingCar RC1("bot1", 12000, 2, "diesel", "formula1");
    TouristBike TB1("bot2", 1200, 12, "alloy", "dart1");

    RC1.display();
    TB1.display();
    return 0;
}