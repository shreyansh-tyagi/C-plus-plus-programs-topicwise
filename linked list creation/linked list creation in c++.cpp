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

int main()
{
    struct node *root=NULL, *temp=NULL,*p=NULL;
    int n,i;
    cout<<"enter the size of linked list: ";
    cin>>n;
    for (i=0;i<n;i++)
    {
    temp=(struct node *)malloc(sizeof(struct node));
    cout<<"\n\nenter the element into linked list: ";
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
            
        }

    }
    }
}