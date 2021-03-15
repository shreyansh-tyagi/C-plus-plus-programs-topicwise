#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,a[50],*p,n,*ptr[50];
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"\nenter the value into array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    p=a;
    cout<<"\nfirst array through single pointer variable\n";
    for(i=0;i<n;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<"\nfirst array through pointer array:\n ";
    for(i=0;i<n;i++)
    {
        ptr[i]=a+i;
    }
    cout<<"\npointer array value : \n";
    for(i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<"\nvalue through pointer array: \n";
    for(i=0;i<n;i++)
    {
        cout<<*ptr[i]<<" ";
    }
    return 0;
}