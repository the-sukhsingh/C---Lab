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
    cout << "The array is" << endl;
    for (int i = 0; i < n; i++){
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
        ITEM = Stack[Top - 1];
        Top = Top - 1;
    }
    
}

int main(){
    int array[5] = {2, 4,8,64};
    int top = 4;
    int Item = 0;
    Pop(array,top,Item);
    display(array,top);
    cout<<Item<<endl;
    return 0;
}