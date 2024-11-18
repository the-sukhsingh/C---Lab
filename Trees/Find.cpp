#include <iostream>
using namespace std;

typedef struct node
{
    node *left;
    int data;
    node *right;
} node;

void FIND(node* Root,int item)
{
    node* loc;
    node* par;
    if(Root == NULL) {
        loc = NULL;
        par = NULL;
        return;
    }
    if(item == Root->data){
        loc = Root;
        par = NULL;
        return;
    }
    node* ptr;
    node* save;
    if(item < Root->data){
        ptr = Root->left;
        save = Root;
    }else{
        ptr = Root->right;
        save = Root;
    }

    while (ptr != NULL)
    {
        if(item == ptr->data){

            loc = ptr;
            par = save;
            cout<<"The item is found at loc "<<loc<<endl;
            cout<<"parent is found at "<<par<<endl;
            return;
        }
        if(item < ptr->data){
            save = ptr;
            ptr = ptr->left;
        }else{
            save = ptr;
            ptr = ptr->right;
        }   
    }

    par = save;
    loc = NULL;
    cout<<"loc is "<<loc;
    cout<<endl<<"par is "<<par<<endl;
    return;    
}


int main()
{
    node n1, n2, n3, n4, n5, n6, n7;
    n1.data = 50;
    n2.data = 9;
    n3.data = 80;
    n1.left = &n2;
    n1.right = &n3;
    n2.left = &n4;
    n2.right = &n5;
    n3.left = &n6;
    n3.right = &n7;
    n4.data = 5;
    n5.data = 15;
    n6.data = 60;
    n7.data = 90;

    n4.left = NULL;
    n5.left = NULL;
    n6.left = NULL;
    n7.left = NULL;
    n4.right = NULL;
    n5.right = NULL;
    n6.right = NULL;
    n7.right = NULL;
    cout<<"loc is bef "<<&n4<<endl;
    cout<<"par is bef "<<&n2<<endl;
    FIND(&n1,5);
    return 0;
}