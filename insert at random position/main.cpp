#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *link;

};
void display(struct node *);
int main()
{
    int i,n;
    struct node *temp=NULL,*root=NULL,*p=NULL;
    cout<<"enter the length of linked list: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"enter the element into the linked list: ";
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
    return 0;
}
void display(struct node *root)
{
    struct node *temp=root;
    cout<<"\nlinked list is :\n ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ->";
        temp=temp->link;
    }
}