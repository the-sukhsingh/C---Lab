// write a program with the help of class to show the concept of fn overloading.
#include <iostream>
#include <string>
using namespace std;

class PaymentProcessor
{
public:
    void processPayment(int amount)
    {
        cout << "Processing cash payment of $" << amount << endl;
    }
    void processPayment(float amount)
    {
        cout << "Processing credit card payment of $" << amount << endl;
    }
    void processPayment(string accountNumber)
    {
        cout << "Processing bank transfer to account: " << accountNumber << endl;
    }
};

int main()
{
    PaymentProcessor processor;
    processor.processPayment(100); // Cash payment
    processor.processPayment(150.75f); // Credit card payment
    processor.processPayment("123456789"); // Bank transfer
    return 0;
}

/*
Output:
Processing cash payment of $100
Processing credit card payment of $150.75
Processing bank transfer to account: 123456789

*/