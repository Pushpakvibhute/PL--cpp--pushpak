
#include <iostream>
using namespace std;

class Employee
{
public:
    float salary, bonus, totalSalary;

    // Default constructor
    Employee()
    {
        salary = 20000;
        bonus = 2000;
    }

    // Parameterized constructor
    Employee(float s, float b)
    {
        salary = s;
        bonus = b;
    }

    void calculate()
    {
        totalSalary = salary + bonus;
    }

    void display()
    {
        cout << "Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee e1;
    e1.calculate();

    cout << "Default Constructor:" << endl;
    e1.display();

    Employee e2(30000, 5000);
    e2.calculate();

    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    return 0;
}
