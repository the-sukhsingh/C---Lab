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


void insert(node*& start,node* n, int item,node*& avail)
{
    if (avail == NULL)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    
    node* NEW = avail;
    avail = avail->link;
    NEW->info=item;
    if (n == NULL)
    {
        NEW->link = start;
        start = NEW;
    }
    else{
        NEW->link = n->link;
        n->link = NEW;
    }
    cout<<item<<" is inserted after "<<n->info<<" in the list"<<endl;
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
    insert(start,&n2, 85,avail);
    insert(start,&n1, 40,avail);
    insert(start,&n3, 35,avail);
    insert(start,&n2, 20,avail);
    traverse(start);
    return 0;
}