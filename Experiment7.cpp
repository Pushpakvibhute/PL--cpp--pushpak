
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    static int count;

    Student(int r)
    {
        roll = r;
        count++;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}

