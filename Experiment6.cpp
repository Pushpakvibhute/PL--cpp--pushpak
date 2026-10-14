
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    float price;

    // Parameterized constructor
    Book(string t, float p)
    {
        title = t;
        price = p;
    }

    // Copy constructor
    Book(const Book &b)
    {
        title = b.title;
        price = b.price;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called for " << title << endl;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main()
{
    Book b1("C++ Programming", 500);

    cout << "Original Book Details:" << endl;
    b1.display();

    Book b2 = b1;

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}
