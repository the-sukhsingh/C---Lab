#include<iostream>
using namespace std;

class Sample{
    int a;
    public:
        Sample(int x){
            a = x;
        }
        friend void display(Sample s);
};

void display(Sample s){
    cout << "Value of a is: " << s.a << endl;
}

int main(){
    Sample s(10);
    display(s);
    return 0;
}

// Output: Value of a is: 10