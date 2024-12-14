/*Task 2: Comparing Private Members of Two Objects
Create a class Rectangle with private members length and width. Write a friend function to
compare two rectangle objects and determine which one has the larger area.*/

#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}
    friend void Comparison(const Rectangle &r1, const Rectangle &r2);
};

void Comparison(const Rectangle &r1, const Rectangle &r2)
{
    float area1 = r1.length * r1.width;
    cout << "Area of Rectangle 1: " << area1 << endl;

    float area2 = r2.length * r2.width;
    cout << "Area of Rectangle 2: " << area2 << endl;

    if (area1 > area2)
        cout << "Rectangle 1 has greater area" << endl;

    else
        cout << "Rectangle 2 has greater area" << endl;
}

int main()
{
    Rectangle r1(30, 26);
    Rectangle r2(45, 60);

    Comparison(r1, r2);

    return 0;
}