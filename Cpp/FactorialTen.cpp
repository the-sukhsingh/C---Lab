#include<iostream>
using namespace std;

class Factorial
{
    int fact = 1;
    public:
        void calculate(){
            cout<<"The Factorial of "<<fact<<" is: "<<calcFact(fact)<<endl;
        }
        Factorial()
        {
            for (int i = 0; i < 10; i++)
            {
                cout<<"Enter a number"<<endl;
                cin>>fact;
                calculate();
            }
            
        }
        int calcFact(int a){
            if((a == 1) || (a == 0)){
                return 1; // Base case: factorial of 1 and 0 is 1
            }
            else{
                return a * calcFact(a-1); // Recursive call to calculate factorial
            }
        }
};



int main(){
    Factorial o1; // Create an object of the Factorial class
    return 0;
}