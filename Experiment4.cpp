
#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string name;
    int sales[3];
    float price;

    void accept()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price per unit: ";
        cin >> price;

        cout << "Enter sales for 3 months: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> sales[i];
        }
    }

    void display()
    {
        int total = 0;

        cout << "\nProduct Name: " << name << endl;
        cout << "Monthly Sales: ";

        for (int i = 0; i < 3; i++)
        {
            cout << sales[i] << " ";
            total += sales[i];
        }

        cout << "\nTotal Quantity Sold: " << total << endl;
        cout << "Total Bill: " << total * price << endl;
    }
};

int main()
{
    Product p[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << endl;
        p[i].accept();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\nDetails of Product " << i + 1 << endl;
        p[i].display();
    }

    return 0;
}
