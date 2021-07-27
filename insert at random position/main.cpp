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
            while(p!=NULL)
            {
                p=p->link;
            }
            p->link=temp;
        }
    }
    return 0;
}