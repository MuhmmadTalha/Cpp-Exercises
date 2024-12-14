// Designed a library system with a base class, Book, to store details like title, author, and publication year.
// Create a derived class, LibraryBook, inheriting from Book, which adds attributes for shelf number and availability status (available or checked out).

#include <iostream>
#include <string>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    int year;

public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {}
};

class LibraryBook : public Book
{
private:
    int shelfNumber;
    bool availabilityStatus;

public:
    LibraryBook(string t, string a, int y, int sn, bool as) : Book(t, a, y), shelfNumber(sn), availabilityStatus(as) {}

    void displayDetails()
    {
        cout << "Name of Book: " << title << endl;
        cout << "Author of the book: " << author << endl;
        cout << "Publication Year of the book: " << year << endl;
        cout << "Shelf Number of the book is: " << shelfNumber << endl;
        cout << "The availabity status of the book is: " << (availabilityStatus ? "Available" : "Checked Out") << endl;
    }
};

int main()
{
    LibraryBook lB("Diary of a Whimpy Kid - Part IV", "Uchida Roan", 2001, 12, true);
    lB.displayDetails();
}