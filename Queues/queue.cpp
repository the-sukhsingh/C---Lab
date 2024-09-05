#include <iostream>
using namespace std;

void display(int Q[], int n, int front, int rear)
{
    if (front == -1)
    {
        cout<<"The queue is empty."<<endl;
        return;
    }
    cout << "The queue is..." << endl;
    if (front == rear)
    {
        cout << Q[front] << endl;
        return;
    }
    if (rear == n-1)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << Q[i] << " ";
        }
    }
    else
    {
        int k = front;
        do
        {
            cout << Q[k] << " ";
            if (k == n-1)
            {
                k = 0;
            }
            else
            {
                k = k + 1;
            }
        } while (k != (rear + 1));
    }
    cout << endl;
}

void insert(int Q[], int n, int &front, int &rear, int item)
{
    if ((front == 0 && rear == n-1) || (front == rear + 1))
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == n-1)
            {
                rear = 0;
            }
            else
            {
                rear = rear + 1;
            }
        }
    }
    Q[rear] = item;
    cout<<"The item is inserted successfully in queue."<<endl;
}

void delet(int Q[], int n, int &front, int &rear, int &item)
{
    if (front == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    item = Q[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == n-1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
    cout<<"The item is deleted successfully."<<endl;
}

int main()
{
    int n;
    cout << "Enter size of queue..." << endl;
    cin >> n;

    int queue[n];
    int front = -1;
    int rear = -1;

    int op = 0;
    int inp = 0;
    int del = 0;

    bool check = true;

    while (check)
    {
        cout << "What do you want to do with queue..." << endl
             << "1. Display" << endl
             << "2. Insert"  << endl
             << "3. Delete"  << endl
             << "4. Exit"    << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            display(queue, n, front, rear);
            cout << "The value of front is: " << front << endl;
            cout << "The value of rear is: " << rear << endl;
            break;
        case 2:
            cout << "Enter item to enter..." << endl;
            cin >> inp;
            insert(queue, n, front, rear, inp);
            break;
        case 3:
            delet(queue, n, front, rear, del);
            break;
        case 4:
            check = false;
            cout<<"Bye..."<<endl;
            break;
        default:
            cout<<"Enter 1, 2 or 3..."<<endl;
            break;
        }
    }

    return 0;
}