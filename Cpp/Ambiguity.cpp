#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() {
        cout << "Derived2 class show function" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void show() {
        cout << "Derived3 class show function" << endl;
    }
};

int main() {
    Derived3 obj;
    // obj.show(); // This will cause ambiguity
    
    obj.Derived1::show(); // Resolving ambiguity by specifying the path
    obj.Derived2::show(); // Resolving ambiguity by specifying the path

    return 0;
}