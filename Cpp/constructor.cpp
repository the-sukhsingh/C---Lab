// write a program in which we have to use the concept of 
// default, parametrized and copy constructor  and difference 
// between constructor and destructor.
#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    // Default constructor
    Student()
    {
        roll = 1;
        name = "Sukhjit Singh";
        marks = 100;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
        cout << "Copy constructor called" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for roll no: " << roll << endl;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101, "Rahul", 98.5);
    Student s3(s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}

/*
Output:

Default constructor called
Parameterized constructor called
Copy constructor called
Roll No: 1
Name: Sukhjit Singh
Marks: 100
Roll No: 101
Name: Rahul
Marks: 98.5
Roll No: 101
Name: Rahul
Marks: 98.5
Destructor called for roll no: 101
Destructor called for roll no: 101
Destructor called for roll no: 1

*/