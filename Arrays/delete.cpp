// C++ program to Delete an element in an Array

/*
Algorithm to Delete an element in an Array

DELETE[ARRAY, N, K, ITEM]

1. Start
2. Set ITEM = ARRAY[K]
3. Repeat step 4 for J = K to N-1
4.      Set ARRAY[J] = ARRAY[J+1]
        End of Step 3 Loop
5. Set N = N - 1
6. Exit
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    int k,item;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int array[n];
    cout<<"Enter the values of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"The array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
        
    cout<<endl<<"Enter the Location You want to Delete"<<endl;
    cin>>k;
    
    item = array[k-1];
    for (int j = k-1; j < n-1; j++)
    {
        array[j]=array[j+1];
    }
    n= n-1;
    cout<<"The element on location "<<k<<" which was "<<item<<" is deleted successfully."<<endl;
    cout<<"The new array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}