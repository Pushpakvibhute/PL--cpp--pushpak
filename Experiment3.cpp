
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void accept()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter();
};

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r;

    r.accept();

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
