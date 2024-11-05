#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

// Single Inheritance
class SingleDerived : public Base {
public:
    void show() {
        cout << "Single Derived class show function" << endl;
    }
};

// Multiple Inheritance
class Base1 {
public:
    void display1() {
        cout << "Base1 class display function" << endl;
    }
};

class MultipleDerived : public Base, public Base1 {
public:
    void show() {
        cout << "Multiple Derived class show function" << endl;
    }
};

// Multilevel Inheritance
class Intermediate : public Base {
public:
    void intermediateDisplay() {
        cout << "Intermediate class display function" << endl;
    }
};

class MultilevelDerived : public Intermediate {
public:
    void show() {
        cout << "Multilevel Derived class show function" << endl;
    }
};

// Hierarchical Inheritance
class HierarchicalDerived1 : public Base {
public:
    void show() {
        cout << "Hierarchical Derived1 class show function" << endl;
    }
};

class HierarchicalDerived2 : public Base {
public:
    void show() {
        cout << "Hierarchical Derived2 class show function" << endl;
    }
};

// Hybrid Inheritance
class HybridDerived : public SingleDerived, public Base1 {
public:
    void show() {
        cout << "Hybrid Derived class show function" << endl;
    }
};

int main() {
    // Single Inheritance
    SingleDerived single;
    cout<<"The single derived class object is created."<<endl;
    single.display();
    single.show();

    // Multiple Inheritance
    MultipleDerived multiple;
    cout<<"\v\vThe multiple derived class object is created."<<endl;
    multiple.display();
    multiple.display1();
    multiple.show();

    // Multilevel Inheritance
    MultilevelDerived multilevel;
    cout<<"\v\vThe multilevel derived class object is created."<<endl;
    multilevel.display();
    multilevel.intermediateDisplay();
    multilevel.show();

    // Hierarchical Inheritance
    HierarchicalDerived1 hierarchical1;
    cout<<"\v\vThe hierarchical derived1 class object is created."<<endl;
    hierarchical1.display();
    hierarchical1.show();

    HierarchicalDerived2 hierarchical2;
    cout<<"\v\vThe hierarchical derived2 class object is created."<<endl;
    hierarchical2.display();
    hierarchical2.show();

    // Hybrid Inheritance
    HybridDerived hybrid;
    cout<<"\v\vThe hybrid derived class object is created."<<endl;
    hybrid.display();
    hybrid.display1();
    hybrid.show();

    return 0;
}