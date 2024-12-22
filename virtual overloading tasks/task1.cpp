/*Task 1:Basic Virtual Function (solve with the help of internet):
    Create a base class Shape with a virtual function area(). Derive two classes, Rectangle and
    Circle, and override the area() function to compute their respective areas. Demonstrate
    runtime polymorphism.*/

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape
{
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void area() override
    {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r) : radius(r) {}
    void area() override
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Rectangle rect(10.6, 5.5);
    Circle circ(3.3);

    Shape *s;
    s = &rect;
    s->area();

    s = &circ;
    s->area();

    return 0;
}