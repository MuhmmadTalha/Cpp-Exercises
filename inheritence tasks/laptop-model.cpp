// **File Name**: `LaptopModel.cpp`

// **Summary**:
// Design a `Laptop` class with attributes `brand`, `model`, and `ownerName`. Implement a copy constructor that creates a new laptop object with the same `brand` and `model` but leaves `ownerName` empty. Include a method `setOwnerName` to assign an owner name after object creation.

// In the main function:
// 1. Create an original laptop object.
// 2. Copy it to a new laptop using the copy constructor.
// 3. Use `setOwnerName` to assign an owner to the copied laptop.
// 4. Display the details (brand, model, owner) of both laptops.
// 5. Calculate and display the average price of the laptops.

#include <iostream>
#include <string>
using namespace std;

class Laptop
{
private:
    string brand;
    string model;
    string ownername;
    int price;

public:
    Laptop(string b, string m, string on, int p) : brand(b), model(m), ownername(on), price(p) {}
    Laptop(const Laptop &lap)
    {
        brand = lap.brand;
        model = lap.model;
        ownername = "";
        price = lap.price;
    }

    void setOwnerName(string on)
    {
        ownername = on;
    }

    int avgPrice()
    {
        return price;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Owner: " << ownername << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Laptop L1("Dell", "H20", "bot1", 1200);
    Laptop L2 = L1;
    L1.display();
    L2.setOwnerName("Bob");
    L2.display();
    int averagePrice = (L1.avgPrice() + L2.avgPrice()) / 2;
    cout << "Average Price of Laptops: " << averagePrice << endl;

    return 0;
}
