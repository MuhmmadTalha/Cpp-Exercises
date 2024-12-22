// Task 3 : Inventory System:
//      Create a base class Item with a virtual function getPrice(). Derive classes like Electronics
//      and Groceries to implement different pricing mechanisms (e.g., discounts, tax rates). Use
//      polymorphism to calculate the total cost for a mixed inventory list.

#include <iostream>
using namespace std;

class Item
{
protected:
    float price;

public:
    Item(float p) : price(p) {}

    virtual float getPrice()
    {
        return price;
    }

    virtual ~Item() {} // destructor
};

class Electronics : public Item
{
    float discount;

public:
    Electronics(float p, float d) : Item(p), discount(d) {}

    float getPrice() override
    {
        return Item::getPrice() - (discount * Item::getPrice() / 100);
    }
};

class Groceries : public Item
{
    float tax;

public:
    Groceries(float p, float t) : Item(p), tax(t) {}

    float getPrice() override
    {
        return Item::getPrice() + (tax * Item::getPrice() / 100);
    }
};

int main()
{
    const int invSize = 4;
    Item *inv[invSize];

    inv[0] = new Electronics(500.0f, 10.0f);
    inv[1] = new Groceries(100.0f, 5.0f);
    inv[2] = new Electronics(1200.0f, 15.0f);
    inv[3] = new Groceries(50.0f, 8.0f);

    float totalCost = 0.0f;

    for (int i = 0; i < invSize; ++i)
    {
        totalCost += inv[i]->getPrice();
    }

    cout << "Total Cost of Items in Cart is $" << totalCost << endl;

    for (int i = 0; i < invSize; ++i)
    {
        delete inv[i];
    }

    return 0;
}
