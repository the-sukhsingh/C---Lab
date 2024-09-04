// Get Postfix expression from Infix expression

/*
Algorithm for converting infix expression to postfix expression:

POLISH(Q,P)

1. START
2. Add a right paranthesis ")" at the end of Q and a left paranthesis "(" onto STACK.  [This acts as sentinal.]
3. Scan Q from left to right and repeat step 4 to 7 for each element of Q until the STACK is empty.
4. If an operand is encountered, append it to P.
5. If a left paranthesis is encountered, push it onto the STACK.
6. If an operator X is encountered, then:
    (a) Repeatdly pop from STACK and add to P each operator (on the top of the STACK) which
        has same precedence or higher precedence than X.
    (b) Push X onto the STACK.
    [End of if structure]
7. If a right paranthesis is encountered, then:
    (a) Repeatdly pop from STACK and add to P each operator (on the top of the STACK)
        until a left paranthesis is encountered.
    (b) Pop the left paranthesis from the STACK.
    [End of if structure]
[End of Step 3 loop]
8. EXIT

*/

#include <iostream>
#include <string>
using namespace std;

// Function to push an item onto the stack
void Push(string Array[], int &top, char Item)
{
    top = top + 1;
    Array[top] = Item;
}

// Function to convert infix expression to postfix expression
void cal(string s, string p, string stack[], int &top)
{
    Push(stack, top, '('); // Push '(' onto the stack
    s = s + ")";           // Append ')' to the end of the infix expression
    int len = s.length();
    for (int i = 0; i < len; i++ && top >= 0)
    {
        if ((s[i] == '+') || (s[i] == '-') || (s[i] == '*') || (s[i] == '/') || (s[i] == '^'))
        {
            p = p + " "; // Add a space to separate operators and operands in the postfix expression
            if ((s[i] == '+') || (s[i] == '-'))
            {
                if (stack[top] == "(")
                {
                    Push(stack, top, s[i]); // Push the operator onto the stack if the top of the stack is '('
                }
                else
                {
                    p = p + stack[top];     // Append the top of the stack to the postfix expression
                    top = top - 1;          // Pop the top of the stack
                    Push(stack, top, s[i]); // Push the operator onto the stack
                }
            }
            else if ((s[i] == '*') || (s[i] == '/'))
            {
                if ((stack[top] == "*") || (stack[top] == "/") || (stack[top] == "^"))
                {
                    p = p + stack[top];     // Append the top of the stack to the postfix expression
                    top = top - 1;          // Pop the top of the stack
                    Push(stack, top, s[i]); // Push the operator onto the stack
                }
                else
                {
                    Push(stack, top, s[i]); // Push the operator onto the stack
                }
            }
            else if ((s[i] == '^'))
            {
                if ((stack[top] == "^"))
                {
                    p = p + stack[top];     // Append the top of the stack to the postfix expression
                    top = top - 1;          // Pop the top of the stack
                    Push(stack, top, s[i]); // Push the operator onto the stack
                }
                else
                {
                    Push(stack, top, s[i]); // Push the operator onto the stack
                }
            }
        }
        else if (s[i] == ')')
        {
            p = p + " "; // Add a space to separate operators and operands in the postfix expression
            while (stack[top] != "(")
            {
                p = p + stack[top]; // Append the top of the stack to the postfix expression
                top = top - 1;      // Pop the top of the stack
            }
            top = top - 1; // Pop '(' from the stack
        }
        else if (s[i] == '(')
        {
            p = p + " ";            // Add a space to separate operators and operands in the postfix expression
            Push(stack, top, s[i]); // Push '(' onto the stack
        }
        else
        {
            p = p + s[i]; // Append the operand to the postfix expression
        }
    }
    cout << "Postfix expression is: " << p << endl;
}

int main()
{
    string arry[15];
    string s;
    cout << "Enter infix expression\n";
    cin >> s;
    int top = -1;
    string p;
    cal(s, p, arry, top);

    return 0;
}