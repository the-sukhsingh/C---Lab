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
    float c, d;
    char oprtr;

public:
    void calculate(float, char, float);
    void enterData();
    Scientific()
    {
        enterData();
        calculate(c, oprtr, d);
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

void Scientific::enterData()
{
   while(true)
    {

    
    cout << "Which Calculation Do you want to do:" << endl
         << "1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Power\n6 for Square\n7 for Exponential\n8 for Factorial" << endl;
    cin >> oprtr;
    if ((oprtr == '6') || (oprtr == '7') || (oprtr == '8'))
    {
        cout << "Enter number" << endl;
        cin >> c;
    calculate(c,oprtr,0);
    }
    else
    {
        cout << "Enter First Number:" << endl;
        cin >> c;
        cout << "Enter Second Number:" << endl;
        cin >> d;
        calculate(c,oprtr,d);
    }
    }
}

void Scientific::calculate(float x, char op, float y = 0)
{
    if (op == '1')
    {
        cout << x << " + " << y << " = " << add(x, y) << endl;
    }
    else if (op == '2')
    {
        if(x>y){
        cout << x << " - " << y << " = " << sub(x, y) << endl;
        }
        else{
        cout << x << " - " << y << " = -" << sub(y,x) << endl;
        }
    }
    else if (op == '3')
    {
        cout << x << " * " << y << " = " << mul(x, y) << endl;
    }
    else if (op == '4')
    {
        cout << x << " / " << y << " = " << div(x, y) << endl;
    }
    else if (op == '5')
    {
        cout << x << " ** " << y << " = " << powr(x, y) << endl;
    }
    else if (op == '6')
    {
        cout << x << " ^ 2 " << " = " << square(x) << endl;
    }
    else if (op == '7')
    {
        cout << "e ^ " << x << " = " << expo(x) << endl;
    }
    else if (op == '8')
    {
        cout << x << "! = " << factorial(x) << endl;
    }
}

int main()
{
    Scientific s1;
    return 0;
}