#include<iostream>
using namespace std;

typedef struct node{
    int data;
    node* link;
} node;

void traverse(node* start){
    cout<<"The link list is ... ";
    node* ptr = start;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    } while (ptr != start);
    
}

int main(){
    node n1,n2,n3;
    n1.data = 45;
    n1.link = &n2;
    n2.data = 50;
    n2.link = &n3;
    n3.data = 55;
    n3.link = &n1;
    node* start = &n1;

    traverse(start);


    return 0;
}