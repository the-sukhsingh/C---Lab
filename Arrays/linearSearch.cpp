// C++ code to implement Linear Search

/*
Algorithm to Linear Search

LINEAR-SEARCH[ARRAY, N, ITEM,LOC]

1. Start
2. Set LOC = 1
3. Set ARRAY[N+1] = ITEM
4. Repeat step 5 while ARRAY[LOC] != ITEM
5.      Set LOC = LOC + 1
         End of Step 4 Loop
6. If LOC = N+1 then set LOC = 0
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
    int loc = 0;
    display(array,n);
    cout<<endl<<"Enter the item you want to search"<<endl;
    cin>>item;

    LinearSearch(array,n,item,loc);
    return 0;
}