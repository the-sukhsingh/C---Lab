#include <iostream>
using namespace std;

typedef struct node
{
    int info;
    node *link;
} node;

void traverse(node* start)
{
    node* ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->info << endl;
        ptr = ptr->link;
    }
}


void insert(node*& start, int item)
{
    node* NEW = new node;
    NEW->info=item;
    node* ptr = start;
    node* prevptr = start;
    while ((ptr != NULL) && (ptr->info <= item))
    {
        prevptr = ptr;
        ptr = ptr->link;
    }
    if (prevptr != start)
    {
        NEW->link = prevptr->link;
        prevptr->link = NEW;    
    }
    else{
        NEW->link = start;
        start = NEW;
    }
}



int main()
{
    node n1, n2, n3;
    n1.info = 45;
    n1.link = &n2;
    n2.info = 50;
    n2.link = &n3;
    n3.info = 55;
    n3.link = NULL;
    node* start = &n1;
    traverse(start);
    insert(start, 12);
    insert(start, 52);
    insert(start, 51);
    insert(start, 85);
    traverse(start);
    return 0;
}