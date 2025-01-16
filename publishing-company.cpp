// Imagine a publishing company that markets both book and audiocassette versions. Create a class called
// Publication that stores the title (type string) and price (type float) of a Publication. From this class derive two
// classes: Book, which adds a page_count (type int); and Tape, which adds a playing_time in minutes (type float).
// Each of the three classes should have a respective getter and setter functions.
// Write a main() function create two objects of the class Book and two objects of the class Tape. Display the title
// and price of the book having more pages. Similarly, display the title and price of the tape having more playing
// time.

#include <iostream>
#include <string>
using namespace std;

class Publication
{
private:
    string title;
    float price;

public:
    Publication() : title(""), price(0.0f) {}
    void setData(string t, float p)
    {
        title = t;
        price = p;
    }
    string getTitle() const
    {
        return title;
    }

    float getPrice() const
    {
        return price;
    }
};

class Book : public Publication
{
private:
    int page_count;

public:
    Book() : page_count(0) {}
    void setData(string t, float p, int pc)
    {
        Publication::setData(t, p);
        page_count = pc;
    }
    int getPageCount() const
    {
        return page_count;
    }
};

class Tape : public Publication
{
private:
    float playing_time;

public:
    Tape() : playing_time(0.0f) {}
    void setData(string t, float p, float pt)
    {
        Publication::setData(t, p);
        playing_time = pt;
    }
    float getPlayingTime() const
    {
        return playing_time;
    }
};

int main()
{
    Book b1, b2;
    b1.setData("book1", 200, 890);
    b2.setData("book2", 450, 780);

    Tape t1, t2;
    t1.setData("tape1", 200, 340);
    t2.setData("tape2", 340, 560);

    if (b1.getPageCount() > b2.getPageCount())
    {
        cout << "Book with more pages:" << endl;
        cout << "Title: " << b1.getTitle() << ", Price: " << b1.getPrice() << endl;
    }
    else
    {
        cout << "Book with more pages:" << endl;
        cout << "Title: " << b2.getTitle() << ", Price: " << b2.getPrice() << endl;
    }

        if (t1.getPlayingTime() > t2.getPlayingTime())
    {
        cout << "Tape with more playing time:" << endl;
        cout << "Title: " << t1.getTitle() << ", Price: " << t1.getPrice() << endl;
    }
    else
    {
        cout << "Tape with more playing time:" << endl;
        cout << "Title: " << t2.getTitle() << ", Price: " << t2.getPrice() << endl;
    }

    return 0;
}
