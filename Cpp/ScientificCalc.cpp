#include <iostream>
using namespace std;

class Basic
{
private:
    float a, b;

public:
    float add(float, float);
    float sub(float, float);
    float mul(float, float);
    float div(float, float);
};

float Basic ::add(float x, float y)
{
    a = x;
    b = y;
    return a + b;
}
float Basic ::sub(float x, float y)
{
    a = x;
    b = y;
    return a - b;
}
float Basic ::mul(float x, float y)
{
    a = x;
    b = y;
    return a * b;
}
float Basic ::div(float x, float y)
{
    a = x;
    b = y;
    return a / b;
}

class Scientific : public Basic
{
private:
    float c;
    float d = 0;
    char oprtr;

public:
    void calculate();
    Scientific()
    {
        cout << "Which Calculation Do you want to do:" << endl
             << "1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Power\n6 for Square\n7 for Exponential\n8 for Factorial" << endl;
        cin >> oprtr;
        if ((oprtr == '6') || (oprtr == '7') || (oprtr == '8'))
        {
            cout << "Enter number" << endl;
            cin >> c;
        }
        else
        {
            cout << "Enter First Number:" << endl;
            cin >> c;
            cout << "Enter Second Number:" << endl;
            cin >> d;
        }
    }

    float powr(float, int);
    float square(float);
    float expo(float);
    int factorial(int);
};

float Scientific ::powr(float x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y == 1)
    {
        return x;
    }
    else
    {
        return x * powr(x, y - 1);
    }
}

float Scientific::square(float x)
{
    return x * x;
}

float Scientific::expo(float x)
{
    return powr(2.7182818284590452353602874713527, x);
}

int Scientific::factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void Scientific::calculate()
{
    float x = c;
    float y = d;
    char op = oprtr;
    
    switch (op)
    {
        case '1':
            cout << x << " + " << y << " = " << add(x, y) << endl;
            break;
        case '2':
            if (x > y)
            {
                cout << x << " - " << y << " = " << sub(x, y) << endl;
            }
            else
            {
                cout << x << " - " << y << " = -" << sub(y, x) << endl;
            }
            break;
        case '3':
            cout << x << " * " << y << " = " << mul(x, y) << endl;
            break;
        case '4':
            if(y>0)
                cout << x << " / " << y << " = " << div(x, y) << endl;
            else
                cout << "Division by zero is not possible" << endl;
            break;
        case '5':
            cout << x << " ** " << y << " = " << powr(x, y) << endl;
            break;
        case '6':
            if(x<0)
                cout << "Square of a negative number is not possible" << endl;
            else
                cout << x << " ^ 2 " << " = " << square(x) << endl;
            break;
        case '7':
            if(x<0)
                cout << "Exponential of a negative number is not possible" << endl;
            else
                cout << "e ^ " << x << " = " << expo(x) << endl;
            break;
        case '8':
            if(x<0)
                cout << "Factorial of a negative number is not possible" << endl;
            else
                cout << x << "! = " << factorial(x) << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }
}


int main()
{
    while (true)
    {
        Scientific o1;
        o1.calculate();
    }
    
    return 0;
}

/*
Output:
Which Calculation Do you want to do:
1 for Addition
2 for Subtraction
3 for Multiplication
4 for Division
5 for Power
6 for Square
7 for Exponential
8 for Factorial
1
Enter First Number:
10
Enter Second Number:
20
10 + 20 = 30

*/