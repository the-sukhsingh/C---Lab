#include <iostream>
using namespace std;

typedef struct node
{
    int info;
    node *link;
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


void insert(node*& start, int item, node*& avail)
{
    if (avail ==  NULL)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    
    node* NEW = avail;
    avail = avail->link;
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
    cout<<item<<" is inserted according to its value"<<endl;
}



int main()
{
    node n1, n2, n3;
    node a1, a2, a3;
    n1.info = 45;
    n1.link = &n2;
    n2.info = 50;
    n2.link = &n3;
    n3.info = 55;
    n3.link = NULL;
    node* start = &n1;
    a1.link = &a2;
    a2.link = &a3;
    a3.link = NULL;
    node* avail = &a1;
    insert(start, 12, avail);
    insert(start, 52, avail);
    insert(start, 51, avail);
    insert(start, 85, avail);
    traverse(start);
    return 0;
}