// C++ program to Insert an element in an Array

#include<iostream>
using namespace std;

void display(int array[],int n){
    cout<<"The array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}

void insert(int arr[],int n, int k, int item) {
    int j=n;
    // for (int j = n; j >= k-1; j--)
    // {
    //     array[j+1] = array[j];
    // }
    while (j>=k-1)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    
    arr[k-1]=item;
}

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
    
    display(array,n);
        
    cout<<endl<<"Enter the item and place where you want to insert"<<endl;
    cin>>item>>k;
    
    
    insert(array,n,k,item);
    n = n + 1;
    
    cout<<"The new array is"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}