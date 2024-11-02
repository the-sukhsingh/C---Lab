// write a program with the help of class to show the concept of fn overloading.
#include <iostream>
using namespace std;

class PaymentProcessor
{
public:
    void processPayment(int amount)
    {
        cout << "Processing cash payment of $" << amount << endl;
    }
    void processPayment(int a1,int a2)
    {
        cout << "Processing cash payment of $" << a1+a2 << endl;
    }
    void processPayment(float amount)
    {
        cout << "Processing credit card payment of $" << amount << endl;
    }

};

int main()
{
    PaymentProcessor processor;
    processor.processPayment(100); // Cash payment
    processor.processPayment(150.75f); // Credit card payment
    processor.processPayment(50,100); // Cash payment
    return 0;
}

/*
Output:
Processing cash payment of $100
Processing credit card payment of $150.75
Processing cash payment of $150

*/