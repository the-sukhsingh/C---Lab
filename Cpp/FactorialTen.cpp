#include <iostream>
using namespace std;

class Factorial
{
    int fact = 1;

public:
    void calculate()
    {
        cout << "The Factorial of " << fact << " is: " << calcFact(fact) << endl;
    }
    Factorial()
    {

        cout << "Enter a number" << endl;
        cin >> fact;
    }
    int calcFact(int a)
    {
        if ((a == 1) || (a == 0))
        {
            return 1; // Base case: factorial of 1 and 0 is 1
        }
        else
        {
            return a * calcFact(a - 1); // Recursive call to calculate factorial
        }
    }
};

int main()
{
    for (int i = 0; i < 10; i++)
    {
        Factorial o1; // Create an object of the Factorial class
        o1.calculate();
    }
    return 0;
}

// Output:
// Enter a number 5
// The Factorial of 5 is: 120
// Enter a number 6
// The Factorial of 6 is: 720
// Enter a number 7
// The Factorial of 7 is: 5040
// Enter a number 8
// The Factorial of 8 is: 40320
// Enter a number 9
// The Factorial of 9 is: 362880
// Enter a number 10
// The Factorial of 10 is: 3628800
// Enter a number 11
// The Factorial of 11 is: 39916800
// Enter a number 12
// The Factorial of 12 is: 479001600
// Enter a number 13
// The Factorial of 13 is: 6227020800
// Enter a number 14
// The Factorial of 14 is: 87178291200
