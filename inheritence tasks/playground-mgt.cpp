// **File Name**: `PlaygroundManagement.cpp`

// **Summary**:
// Create a `Rectangle` class with attributes `length` and `width`. Derive a class `PlayArea` that adds a `surfaceType` attribute. Further, derive a `PlayGround` class from `PlayArea` that includes an additional attribute for the number of players.

// In the main function, create three objects: `footballGround`, `lawnTennisGround`, and `basketballGround`.
// Display the details of the playground with the maximum area and calculate the average number of players across all three grounds.
// Add necessary methods and constructors while ensuring no data members are public.

#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
protected:
    float length;
    float width;
    float area;

public:
    Rectangle(float l, float w) : length(l), width(w)
    {
        area = length * width;
    }

    float getArea() const
    {
        return area;
    }
};

class PlayArea : public Rectangle
{
protected:
    string surfaceType;

public:
    PlayArea(float l, float w, string surface = "Grass") : Rectangle(l, w), surfaceType(surface) {}

    void display() const
    {
        cout << "Length: " << length << ", Width: " << width << ", Surface Type: " << surfaceType << endl;
    }
};

class PlayGround : public PlayArea
{
protected:
    int Players;

public:
    PlayGround(float l = 0, float w = 0, string surface = "Grass", int p = 0) : PlayArea(l, w, surface), Players(p) {}

    int getPlayers() const
    {
        return Players;
    }

    void display() const
    {
        PlayArea::display();
        cout << "Players: " << Players << ", Area: " << getArea() << endl;
    }
};

int main()
{
    PlayGround footballGround(100, 60, "Grass", 22);
    PlayGround lawtennisGround(90, 90, "Clay", 2);
    PlayGround basketballGround(90, 90, "Concrete", 20);

    float tennisArea = lawtennisGround.getArea();
    float basketballArea = basketballGround.getArea();

    float maxArea = footballGround.getArea();

    if (tennisArea > maxArea)
    {
        lawtennisGround.display();
    }
    else if (basketballArea > maxArea)
    {
        basketballGround.display();
    }
    else
    {
        footballGround.display();
    }

    float avgPlayers = (footballGround.getPlayers() + lawtennisGround.getPlayers() + basketballGround.getPlayers()) / 3;

    cout << "\nAverage Number of Players: " << avgPlayers << endl;

    return 0;
}
