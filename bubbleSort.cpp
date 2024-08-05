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
    cout<<"The sorted array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}

void BubbleSort(int Array[],int N)
{
    for (int k = 0; k < N; k++)
    {

        PTR = 0;
        while (PTR <= N-k)
        {
            
            if (Array[PTR] > Array[PTR + 1])
            {
                temp = Array[PTR];
                Array[PTR] = Array[PTR + 1];
                Array[PTR + 1] = temp;
            }
            PTR = PTR + 1;
        }
    }
    display(Array,N);
}

int main(){
    int Array[8] = {45,5,7,9,3,49,2,1};
    N = 8;
    BubbleSort(Array,N);
    return 0;
}