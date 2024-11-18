#include<iostream>
using namespace std;

typedef struct node{
    node* left;
    int data;
    node* right;
} node;


void preOrder(node* N)
{
    if(N == NULL){
        return;
    }
    cout<<N->data<<' ';
    preOrder(N->left);
    preOrder(N->right);
}
void inOrder(node* N)
{
    if(N == NULL){
        return;
    }
    inOrder(N->left);
    cout<<N->data<<' ';
    inOrder(N->right);
}
void postOrder(node* N)
{
    if(N == NULL){
        return;
    }
    postOrder(N->left);
    postOrder(N->right);
    cout<<N->data<<' ';
}


int main(){

    node n1,n2,n3,n4,n5,n6,n7;
    n1.data = 1;
    n2.data =2;
    n3.data = 3;
    n1.left =&n2;
    n1.right = &n3;
    n2.left = &n4;
    n2.right = &n5;
    n3.left = &n6;
    n3.right = &n7;
    n4.data = 4;
    n5.data = 5;
    n6.data = 6;
    n7.data = 7;

    n4.left = NULL;
    n5.left = NULL;
    n6.left = NULL;
    n7.left = NULL;
    n4.right = NULL;
    n5.right = NULL;
    n6.right = NULL;
    n7.right = NULL;

    cout<<"PreOrder Traverse of Tree"<<endl;
    preOrder(&n1);
    cout<<endl;
    cout<<"Inorder Traverse of Tree"<<endl;
    inOrder(&n1);
    cout<<endl;
    cout<<"Postorder Traverse of Tree"<<endl;
    postOrder(&n1);


    return 0;
}