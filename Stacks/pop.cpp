// C++ program to implement pop operation in a stack

/*
Algorithm for pop operation:

POP(STACK, TOP, ITEM)
1. [Check for underflow]
   If TOP = 0, then
      Write "Underflow"
      EXIT
2. ITEM = STACK[TOP]
3. TOP = TOP - 1
4. EXIT

*/

#include<iostream>
using namespace std;
void display(int array[], int n){
    cout << "The Stack is" << endl;
    for (int i = 0; i <= n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void Pop(int Stack[],int& Top, int& ITEM)
{
    if (Top == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else{
        ITEM = Stack[Top];
        Top = Top - 1;
    }
    
}

int main(){
    int n;
    cout << "Enter the size of stack:";
    cin >> n;
    int array[n];
    int top = -1;
    cout << "Enter the elements of the stack" << endl;
    for (int i = 0; i < n; i++){
        cin >> array[i];
        top++;
    }
    
    int Item;
    display(array, top);
    for (int i = 0; i < n + 1; i++){
        cout << "Poping element from stack" << endl;
        Pop(array, top, Item);
        display(array, top);
    }
    return 0;
}