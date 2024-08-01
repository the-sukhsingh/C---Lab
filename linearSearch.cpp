#include<iostream>
using namespace std;

void LinearSearch(int array[],int n,int item, int loc){
    array[n] = item;
    loc = 0;
    while(array[loc] != item){
        loc = loc+1;
    }
    if(loc == n){
        loc = 0;
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