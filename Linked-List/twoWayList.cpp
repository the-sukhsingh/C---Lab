#include<iostream>
using namespace std;

typedef struct node{
    node* prev;
    int info;
    node* next;
} node;

void traverse(node* start){
    cout<<"The list is..."<<endl;
    node* ptr = start;
    while (ptr != NULL)
    {
        cout<<ptr->info<<" ";
        ptr = ptr->next;
    }
    
}

int main(){
    node n1, n2, n3;

    n1.prev = NULL;
    n1.info = 45;
    n1.next = &n2;
    n2.prev = &n1;
    n2.info = 50;
    n2.next = &n3;
    n3.prev = &n2;
    n3.info = 50;
    n3.next = NULL;
    node* start = &n1;
    traverse(start);
    
    return 0;
}