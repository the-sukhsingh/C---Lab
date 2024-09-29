/*
write a program to find sum of 100 natural numbers with the help of class and constructor.
*/

#include <iostream>
using namespace std;

class Sum
{
private:
    int number;
    int sum = 0;

public:
    Sum(int n)
    {
        number = n;
    }

    void calculate()
    {
        for (int i = 1; i <= number; i++)
        {
            sum += i;
        }
    }

    void display()
    {
        cout << "Sum of first "<<number<<" natural numbers is: " << sum << endl;
    }
};

int main()
{
    Sum s(100);
    s.calculate();
    s.display();
    return 0;
}

/*
Output:
Sum of first 100 natural numbers is: 5050
*/