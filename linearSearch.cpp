// C++ code to implement Linear Search

/*
Algorithm to Linear Search

LINEAR-SEARCH[ARRAY, N, ITEM,LOC]

1. Start
2. Set LOC = 0
3. Set ARRAY[N] = ITEM
4. Repeat step 5 while ARRAY[LOC] != ITEM
5.      Set LOC = LOC + 1
         End of Step 4 Loop
6. If LOC = N+1 then set LOC = 0
7. Exit
*/

#include<iostream>
using namespace std;

void LinearSearch(int array[],int n,int item, int loc){
    array[n] = item;
    loc = 0;
    while(array[loc] != item){
        loc = loc+1;
    }
    if(loc == n){
        loc = -1;
        cout<<"The element is not found in the array"<<endl;
    }
    else{
        cout<<"The element found in the array at location "<<loc+1<<endl;
    }
    

}

int main(){
    int loc;
    int array[10] = {12,5,1,48,18,1544,45,35,45,95};
    LinearSearch(array,10,1544,loc);
    return 0;
}