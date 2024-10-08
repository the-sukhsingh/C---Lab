#include<iostream>
using namespace std;

typedef struct node
{
    int info;
    node* link;
} node;

void search(node* start, int item)
{
    node* ptr = start;
    while (ptr != NULL)
    {
        if (item == (ptr->info))
        {
            cout<<"The location is "<<ptr<<endl;
            return;
        }
        else{
            ptr = ptr->link;
        }
    }
    cout<<"ITEM NOT FOUND"<<endl;
    
}

int main(){
    node n1,n2,n3;
    n1.info = 45;
    n1.link = &n2;
    n2.info = 50;
    n2.link = &n3;
    n3.info = 55;
    n3.link = NULL;
    node* start = &n1;
    search(start,50);
    return 0;
}