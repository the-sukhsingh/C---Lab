#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        A (){
            this->a = 50;
            this->b = 100;
            this->c = 150;
        }
        A(int x, int y,int z){
            this->a = x;
            this->b = y;
            this->c = z;
        }
        virtual void display(){
            cout<<"Display function of Class A is called."<<endl;
            cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<" in class A"<<endl;
        }
        
        friend void displayFr(A &o);
};

void displayFr(A &o1){
    cout<<"Display friend function of class A is called"<<endl;
            cout<<"a = "<<o1.a<<"\nb = "<<o1.b<<"\nc = "<<o1.c<<" in class A"<<endl;
        }


class B:public A{
    public:
        B(){
            cout<<"Class B object is created."<<endl;
            cout<<"Default constructor for class A is also called"<<endl;
        }
    void display() override{
            cout<<"This function can not access a of class A as that is private and can only \nbe accessed by class A 's member functions and friend functions."<<endl;
            cout<<"b = "<<b<<"\nc = "<<c<<" in class A"<<endl;
        }
};



int main(){
    A o1(10,20,30);    
    cout<<"\v";
    o1.display();
    cout<<"\v";
    displayFr(o1);
    cout<<"\v";
    B o2;
    cout<<"\v";
    o2.display();
    return 0;
}