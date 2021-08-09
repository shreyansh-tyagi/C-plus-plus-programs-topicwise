#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct node {
    int data;
    struct node *link;
};
void display(struct node *);
void delete_from_begin_end(struct node *);
int main()
{
    struct node *temp=NULL,*root=NULL,*p=NULL;
    int i,n;
    cout<<"enter the length of linked list: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        cout<<"enter the data into linked list: ";
        cin>>temp->data;
        temp->link=NULL;
        if (root==NULL)
        {
            root=temp;
        }
        else{
            p=root;
            while(p->link!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    display(root);
    delete_from_begin_end(root);
}
void display(struct node *root)
{
    struct node *temp=NULL;
    temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void delete_from_begin_end(struct node *root)
{
    root=root->link;
    cout<<"\nlinked list after deletion from begin an end: \n";
    while(root->link!=NULL)
    {
        cout<<root->data<<" ";
        root=root->link;
    }
}