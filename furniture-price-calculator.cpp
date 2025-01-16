// Define the parent class "Furniture" with a pure virtual function called "calculatePrice."
// 1. Implement the "calculatePrice" function in the child class "Table" to calculate the price of a table.
// The price is calculated as: 𝑙𝑒𝑛𝑔𝑡ℎ × 𝑤𝑖𝑑𝑡ℎ × 100
// 2. Implement the "calculatePrice" function in the child class "BookShelf" to calculate the price of a
// book shelf. The price is calculated as: 𝑛𝑢𝑚𝑒𝑟 𝑜𝑓 𝑠ℎ𝑒𝑙𝑓𝑠 × 1500
// 3. Implement the "calculatePrice" function in the child class "Dice" to calculate the price of a dice. The
// price is calculated as: ℎ𝑒𝑖𝑔ℎ𝑡 × 3500
// In main(), take input in each class object and calculate the price of each furniture object polymorphically.

#include <iostream>
using namespace std;

class Furniture
{
public:
    virtual float calculatePrice() = 0;
};

class Table : public Furniture
{
private:
    float length, width;

public:
    Table(float l, float w) : length(l), width(w) {}

    float calculatePrice() override
    {
        return length * width * 100;
    }
};

class BookShelf : public Furniture
{
private:
    int numShelves;

public:
    BookShelf(int n) : numShelves(n) {}

    float calculatePrice() override
    {
        return numShelves * 1500;
    }
};

class Dice : public Furniture
{
private:
    float height;

public:
    Dice(float h) : height(h) {}

    float calculatePrice() override
    {
        return height * 3500;
    }
};

int main()
{
    float length, width, height;
    int numShelves;

    cout << "Enter length and width of table: ";
    cin >> length >> width;
    Table table(length, width);

    cout << "Enter number of shelves in bookshelf: ";
    cin >> numShelves;
    BookShelf bookshelf(numShelves);

    cout << "Enter height of dice: ";
    cin >> height;
    Dice dice(height);

    Furniture *ptr;

    ptr = &table;
    cout << "Table Price: $" << ptr->calculatePrice() << endl;

    ptr = &bookshelf;
    cout << "Bookshelf Price: $" << ptr->calculatePrice() << endl;

    ptr = &dice;
    cout << "Dice Price: $" << ptr->calculatePrice() << endl;

    return 0;
}
