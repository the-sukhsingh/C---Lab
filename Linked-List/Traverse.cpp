#include<iostream>
using namespace std;

typedef struct node
{
    int info;
    node* link;
} node;

void traverse(node* start)
{
    cout<<"The link list is ... ";
    node* ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout<<endl;
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
    traverse(start);
    return 0;
}