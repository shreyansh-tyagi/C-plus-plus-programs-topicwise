#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void insertion(int [],int);
int main()
{
    int i,n,a[50];
    cout<<"\nenter the size of first array: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nfirst array : ";
    insertion(a,n);
    
    return 0;
}
void insertion(int a[50],int n)
{
    int i,b[50],m;
    cout<<"\nenter the size of second array: ";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    cout<<"\nsecond array : ";
}