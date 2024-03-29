#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
void display(struct node *);
void insert_at_begin(struct node *);
void insert_at_end(struct node *);
int main()
{
    int i,n,a;
    struct node *root=NULL,*temp=NULL,*p=NULL;
    cout<<"enter the size of linked list: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"enter the element into the linked list: ";
        cin>>temp->data;
        temp->link=NULL;
        if(root==NULL)
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
    insert_at_begin(root);
    insert_at_end(root);
}
void display(struct node *root)
{
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void insert_at_begin(struct node *root)
{
    struct node *temp=NULL,*p=NULL;
    p=root;
    cout<<"\nenter the element that you want to insert at begin: ";
    temp=(struct node *)malloc(sizeof(struct node));
    cin>>temp->data;
    temp->link=p;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }

}
void insert_at_end(struct node *root)
{
    struct node *temp=NULL,*p=NULL;
    p=root;
    cout<<"\nenter the element that you want to insert at the end: ";
    temp=(struct node *)malloc(sizeof(struct node ));
    cin>>temp->data;
    temp->link=NULL;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->link;
    }
}