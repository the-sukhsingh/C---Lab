// C++ program to Sort an Array Using Bubble Sort

/*
Algorithm to Sort an Array Using Bubble Sort

BUBBLE-SORT[ARRAY,N]

1. Start
2. Repeat Steps 3 and 4 for K = 1 to N-1
3. Set PTR = 1
4. Repeat while PTR <= N-K
    (a) IF Array[PTR] > Array[PTR + 1] then
            Interchange Array[PTR] and Array[PTR + 1]
        [End of If Structure]
    (b) Set PTR = PTR + 1
        [End of inner Loop]
    [End of Outer Loop]
5. Exit

*/

#include<iostream>
using namespace std;

int PTR;
int N;
int temp;
void display(int array[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void BubbleSort(int Array[],int N)
{
    for (int k = 0; k < N-2; k++)
    {

        PTR = 0;
        while (PTR < N-k-1)
        {
            cout<<Array[PTR]<<" "<<Array[PTR + 1]<<" ";
            if (Array[PTR] > Array[PTR + 1])
            {
                temp = Array[PTR];
                Array[PTR] = Array[PTR + 1];
                Array[PTR + 1] = temp;
            }
            PTR = PTR + 1;
        }
        // for (int PTR = 0; PTR < N-k; PTR++)
        // {
        //     if (Array[PTR] > Array[PTR + 1])
        //     {
        //         temp = Array[PTR];
        //         Array[PTR] = Array[PTR + 1];
        //         Array[PTR + 1] = temp;
        //     }
        // }
    }
}

int main(){
    int n;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int array[n];

    cout<<"Enter the values of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"The given Array is"<<endl;
    display(array,n);
    cout<<"The sorted array is"<<endl;
    BubbleSort(array,n);
    cout<<endl;
    display(array,n);
    return 0;
}