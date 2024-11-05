#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload + operator to add two Complex objects
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + i" << imag << endl;
    }
};



int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0), result;
    c1.display();
    c2.display();
    result = c1 + c2;

    cout << "Sum of complex numbers: "; 
    result.display();

    return 0;
}
