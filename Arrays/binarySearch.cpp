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
        cout<<"The ITEM Found at location "<<LOC<<endl;
    }
    else{
        LOC = -1;
        cout<<"The ITEM not found in the given Array"<<endl;
    }

    
}

int main(){
    int Array[10] = {2,4,6,8,10,12,14,16,18,20};
    int ITEM = 15;
    int LOC = 0;
    Binary_Search(Array,0,10,ITEM,LOC);
    return 0;
}