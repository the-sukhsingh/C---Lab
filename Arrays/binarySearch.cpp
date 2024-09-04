// C++ code to implement Binary Search

/*
Algorithm to implement Binary Search

BINARY[Array,LB,UB,ITEM,LOC]

1. Start
2. Set BEG = LB, END = UB & MID = INT((BEG+END)/2)
3. Repeat Steps 4 & 5 while BEG<=END and Array[MID] != ITEM
4. If ITEM < Array[MID] then
        Set END = MID - 1
    else
        Set BEG = MID + 1
    
    End of If structure
5.  Set MID = INT((BEG + END) / 2)
    End of Step 3 Loop
6. If Array[MID] == ITEM then
        Set LOC = MID
    else
        Set LOC = Null
7. Exit    
*/
#include<iostream>
using namespace std;

void display(int array[],int n){
    cout<<"The array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}

void Binary_Search(int Array[],int LB, int UB, int ITEM, int LOC){
    int BEG = LB;
    int END = UB;
    int MID = (BEG + END)/2;
    while (BEG <= END && Array[MID] != ITEM)
    {
        if (ITEM < Array[MID])
        {
            END = MID -1;
        }
        else{
            BEG = MID +1;
        }
        MID = (BEG + END) / 2;
    }
    if (Array[MID] == ITEM)
    {
        LOC = MID+1;
        cout<<"The Item Found at location "<<LOC<<endl;
    }
    else{
        LOC = -1;
        cout<<"The Item not found in the given Array"<<endl;
    }

    
}

int main(){
    int n;
    int item;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int array[n];
    cout<<"Enter the values of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    display(array,n);
    cout<<endl<<"Enter the item you want to search"<<endl;
    cin>>item;
    int LOC = 0;
    Binary_Search(array,0,n,item,LOC);
    return 0;
}