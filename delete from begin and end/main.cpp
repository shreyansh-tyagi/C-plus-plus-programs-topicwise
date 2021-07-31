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
        if 
    }
}