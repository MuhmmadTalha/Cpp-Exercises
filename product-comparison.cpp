/*Task: Create a class named 'Product' witht the following private data members:
'product_name', 'price' , 'quantity'. And implements the following menthos in the class.
1. Implement a copy constructor() that initializesss the product_name and price
    of new objects using the orignal object but sets quantity to zero.
2. setter() function to set the quantity of new object.
3. compare() function to compare the quantity of the orignal object and new object
    and display the details of the object having lower quantity.

In the main function do the following.
1. Create an orignal Product object named as 'saltedLays' and initialize it with values.
2. Use the copy constructor to create a new 'Product' object named as 'maslaLays' based
    on the orignal object.
3. Set the 'quantity' for the new object using setter() function.
    Call the compare() function to compare the quantity of 'saltedLays' and 'masalaLays' and
    display the details of the object having lower values.*/

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string product_name;
    int price;
    int quantity;

public:
    Product(string pn, int p, int q) : product_name(pn), price(p), quantity(q) {}

    // Product() : product_name(""), price(0), quantity(0) {}

    Product(const Product &obj1)
    {
        product_name = obj1.product_name;
        price = obj1.price;
        quantity = 0;
    }

    void setter(int q)
    {
        quantity = q;
    }

    void compare(const Product &obj1)
    {
        if (quantity < obj1.quantity)
        {
            cout << "Product with lower quantity: \n";
            cout << "Product Name: " << product_name << endl;
            cout << "Price of the Product: " << price << endl;
            cout << "Quantity of the Product: " << quantity << endl;
        }

        else
        {
            cout << "Product with lower quantity: \n";
            cout << "Product Name: " << obj1.product_name << endl;
            cout << "Price of the Product: " << obj1.price << endl;
            cout << "Quantity of the Product: " << obj1.quantity << endl;
        }
    }
};

int main()
{
    Product saltedLays("saltedLays", 25, 5);

    Product masalaLays = saltedLays;

    masalaLays.setter(3);

    saltedLays.compare(masalaLays);

    return 0;
}