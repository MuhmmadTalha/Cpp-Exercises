// Library and Book Relationship:
// Create a class Book with private attributes title and author. Create another class Library as
// a friend class that can access and display information about the books.

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book(string t, string a) : title(t), author(a) {}

    friend class Library;
};

class Library
{
public:
    void displayInfo(const Book &b)
    {
        cout << "Name of Book: " << b.title << endl;
        cout << "Author of Book: " << b.author << endl;
    }
};

int main()
{
    Book b1("book1", "author1");
    Book b2("book2", "author2");

    Library lib;
    lib.displayInfo(b1);
    lib.displayInfo(b2);

    return 0;
}
