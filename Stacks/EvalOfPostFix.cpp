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
#include <string>
using namespace std;

int StrToInt(string str) // Convert string to integer
{
    int num = 0;
    for (char c : str)
    {
        num = num * 10 + (c - '0');
    }
    return num;
}

void Push(int Array[], int &top, int Item) // Push an item onto the stack
{
    top = top + 1;
    Array[top] = Item;
}

int Pop(int Stack[], int &Top) // Pop an item from the stack
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

void EvalPost(string arr[], int stack[], int &top) // Evaluate the postfix expression
{
    int i = 0;
    while (arr[i] != ")")
    {
        if ((arr[i] == "+") | (arr[i] == "-") | (arr[i] == "*") | (arr[i] == "/")) // If operator is encountered
        {
            int a = Pop(stack, top); // Pop the top element
            int b = Pop(stack, top); // Pop the next to top element
            if (arr[i] == "+")       // Addition
            {
                int val = b + a;
                Push(stack, top, val); // Push the result back onto the stack
            }
            if (arr[i] == "-") // Subtraction
            {
                int val = b - a;
                Push(stack, top, val); // Push the result back onto the stack
            }
            if (arr[i] == "*") // Multiplication
            {
                int val = b * a;
                Push(stack, top, val); // Push the result back onto the stack
            }
            if (arr[i] == "/") // Division
            {
                int val = b / a;
                Push(stack, top, val); // Push the result back onto the stack
            }
        }
        else // If operand is encountered
        {
            string str = arr[i];
            int val = StrToInt(str); // Convert the string to integer
            Push(stack, top, val);   // Push the operand onto the stack
        }
        i = i + 1;
    }
}

int main()
{
    int n;
    string postfix;
    cout << "Enter the no. of terms in the postfix expression\n";
    cin >> n;
    string arr[n + 1];
    cout << "Enter the terms of the postfix expression separated with spaces" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = ")";              // Add sentinel
    int stack[n];              // Stack to store intermediate results
    int top = -1;              // Top of the stack
    EvalPost(arr, stack, top); // Evaluate the postfix expression
    int val = stack[0];        // Get the final result from the stack
    cout << "The value of the expression is \n";
    cout << val;

    return 0;
}
