#include<iostream>
using namespace std;

inline int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    int a = 10, b = 20;
    cout << "Max of " << a << " and " << b << " is " << max(a, b) << endl;   
    return 0;
}

// Output: Max of 10 and 20 is 20