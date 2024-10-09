#include<iostream>
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

void find(node* start, node*& loc, node*& locp, int item)
{
    if (start == NULL)
    {
        loc = NULL;
        locp = NULL;
        return;
    }
    if (start->info == item)
    {
        loc = start;
        locp = NULL;
        return;
    }
    node* save = start;
    node* ptr = start->link;
    while (ptr != NULL)
    {
        if (ptr->info == item)
        {
            loc = ptr;
            locp = save;
            return;
        }
        else{
            save = ptr;
            ptr = ptr->link;
        }
    }
    loc = NULL;
}

void del(node*& start, node*& avail, int item)
{
    node* loc;
    node* locp;
    find(start,loc,locp,item);
    if (loc == NULL)
    {
        cout<<"Item not in the List"<<endl;
        return;
    }
    if (locp == NULL)
    {
        start = start->link;
    }
    else{
        locp->link = loc->link;
    }
    cout<<item<<" is deleted from the list"<<endl;
    loc->link = avail;
    avail = loc;    
}

int main(){
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

    del(start,avail,15);
    traverse(start);
    return 0;
}