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

    
    return 0;
}