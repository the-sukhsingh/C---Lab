#include <iostream>

using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}

    // Declare ClassB as a friend of ClassA
    friend class ClassB;
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) : valueB(val) {}

    void showValueA(ClassA &a) {
        cout << "Value in ClassA: " << a.valueA << endl;
    }
};

int main() {
    ClassA objA(10);
    ClassB objB(20);

    objB.showValueA(objA);

    return 0;
}

/*
Output:
Value in ClassA: 10
*/