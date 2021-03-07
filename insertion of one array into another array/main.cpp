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
    cout<<"\nenter element into array: \n";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nfirst array :\n ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    insertion(a,n);
    
    return 0;
}
void insertion(int a[50],int n)
{
    int i,b[50],m,loc;
    cout<<"\nenter the size of second array: ";
    cin>>m;
    cout<<"\nenter element into array: \n";
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    cout<<"\nsecond array :\n ";
    for(i=1;i<=m;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\nenter the location from where you want to insert one array into second array:\n ";
    cin>>loc;
    for(i=n;i>=loc;i--)
    {
        a[i+m]=a[i];
    }
    for(i=1;i<=m;i++)
    {
        a[loc]=b[i];
        loc++;
    }
    cout<<"after insertion of one array into another array is: ";
    for(i=1;i<=(n+m);i++)
    {
        cout<<a[i]<<" ";
    }

}