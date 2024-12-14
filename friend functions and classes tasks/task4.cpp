/*Task 4 :
Title: Sharing Private Data Between Two Classes
Problem Statement:
Create two classes, Circle and Rectangle. Both classes have private data members for
dimensions:
Circle stores the radius.
Rectangle stores the length and width.
Write a friend class Geometry that can access the private data members of both classes. The
Geometry class should have functions to:
Calculate the area of the circle and rectangle.
Compare which shape has a larger area.
Hint:
Use the formula for the area of a circle: π×radius2\pi \times \text{radius}^2.
Use the formula for the area of a rectangle: length×width\text{length} \times \text{width}.*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Circle
{
private:
    float radius;

public:
    Circle(float r) : radius(r) {}
    friend class Geometry;
};

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    friend class Geometry;
};

class Geometry
{
public:
    void compare(const Circle &c, const Rectangle &r)
    {
        float carea = c.radius * c.radius * 3.14;
        cout << "Area of Circle: " << fixed << setprecision(2) << carea << endl;

        float rarea = r.length * r.width;
        cout << "Area of Rectangle: " << fixed << setprecision(2) << rarea;

        if (carea > rarea)
            cout << "\nCircle has a greater area than Rectangle." << endl;

        else
            cout << "\nRectangle has a greater area than Circle." << endl;
    }
};

int main()
{
    Circle c1(3.2);
    Rectangle r1(3.2, 8.6);
    Geometry g1;
    g1.compare(c1, r1);
    return 0;
}