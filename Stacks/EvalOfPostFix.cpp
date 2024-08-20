// Evaluation of Postfix Expression

/*
Algorithm for Evaluation of Postfix Expression

1. START
2. Add a right paranthesis ")" at the end of P.  [This acts as sentinal.]
3. Scan P from left to right and repeat step 4 to 6 for each element of P until ")" is encountered.
4. If an operand is encountered, push it onto the stack.
5. If an operator is encountered, then:
    (a) Remove the two top elements from the stack, where A is the top element and B is the next to top element.
    (b) Evaluate B operator A.
    (c) Push the result back onto the stack.
    [End of if structure]
[End of Step 3 loop]
6. Set VALUE equal to the top element of the stack.
7. EXIT


*/

#include <iostream>
using namespace std;

int StrToInt(string str)
{
    int num = 0;
    for (char c : str)
    {
        num = num * 10 + (c - '0');
    }
    return num;
}

void traverse(int array[], int n)
{
    cout << "The array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void Push(int Array[], int top, int Item)
{
    top = top + 1;
    Array[top] = Item;
}

int Pop(int Stack[], int &Top)
{
    int ITEM;
    if (Top == -1)
    {
        cout << "Underflow" << endl;
        return 0;
    }
    else
    {
        ITEM = Stack[Top];
        Top = Top - 1;
        return ITEM;
    }
}

void EvalPost(string arr[], int stack[], int &top)
{
    int i = 0;
    while (arr[i] != ")")
    {
        if ((arr[i] == "+") | (arr[i] == "-") | (arr[i] == "*") | (arr[i] == "/"))
        {
            int a = Pop(stack, top);
            int b = Pop(stack, top);
            if (arr[i] == "+")
            {
                int val = b+a;
                Push(stack, top, val);
                top = top + 1;
            }
            if (arr[i] == "-")
            {
                int val = b-a;
                Push(stack, top, val);
                top = top + 1;
            }
            if (arr[i] == "*")
            {
                int val = b*a;
                Push(stack, top, val);
                top = top + 1;
            }
            if (arr[i] == "/")
            {
                int val = b/a;
                Push(stack, top, val);
                top = top + 1;
            }
        }
        else
        {
            string str = arr[i];
            int val = StrToInt(str);
            Push(stack, top, val);
            top = top + 1;
        }
        i = i + 1;
    }
}

int main()
{
    string arr[10] = {"5", "6", "2", "+", "*", "12", "4", "/", "-", ")"};
    int stack[45];
    int top = -1;
    EvalPost(arr,stack,top);
    int val = stack[0];
    cout<<"The value of the expression is \n";
    cout<<val;

    return 0;
}