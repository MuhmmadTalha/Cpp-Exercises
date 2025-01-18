// Distance Calculation:
// Create two classes Point2D and Point3D, representing 2D and 3D points with private
// attributes for coordinates. Write a friend function calculate distance to compute the distance
// between a Point2D and a Point3D object.

#include <iostream>
#include <cmath>
using namespace std;
class Point3D; // Forward declaration

class Point2D
{
private:
    int x;
    int y;

public:
    Point2D(int x = 0, int y = 0) : x(x), y(y) {}
    friend double calculateDistance(const Point2D &p2, const Point3D &p3);
};

class Point3D
{
private:
    int x;
    int y;
    int z;

public:
    Point3D(int x = 0, int y = 0, int z = 0) : x(x), y(y), z(z) {}
    friend double calculateDistance(const Point2D &p2, const Point3D &p3);
};

double calculateDistance(const Point2D &p2, const Point3D &p3)
{
    return sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2) + pow(p3.z, 2));
}

int main()
{
    Point2D p2d(3, 2);
    Point3D p3d(3, 4, 5);

    cout << "Distance b/w Point2D and Point3D is : " << calculateDistance(p2d, p3d) << endl;

    return 0;
}
