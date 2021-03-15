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
    cout
    return 0;
}