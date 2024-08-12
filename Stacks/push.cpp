// C++ program to implement push operation in a stack

/*
Algorithm for push operation:

PUSH(STACK, TOP, MAXSTK, ITEM)
1. [Check for overflow]
   If TOP = MAXSTK, then
      Write "Overflow"
      EXIT
2. [Increment TOP]
    TOP = TOP + 1
3. STACK[TOP] = ITEM
4. EXIT
*/

#include<iostream>
using namespace std;

void display(int array[], int n){
    cout << "The array is" << endl;
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void Push(int Array[], int& top, int MaxStk, int Item){
    if (top == MaxStk){
        cout << "OverFlow" << endl;
    }
    else{
        top = top + 1;
        Array[top-1] = Item;
    }
}

int main(){
    int array[5] = {2, 4};
    int top = 2;
    int MaxStk = 4;
    int Item = 45;
    Push(array, top, MaxStk, Item);
    display(array, top);
    return 0;
}
