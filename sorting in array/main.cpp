#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void ascending(int [],int);
void descending(int [],int);
int main()
{
    int i,n,a[50];
    cin>>n;
    cout<<"enter the size of array : ";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"first array : ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    ascending(a,n);
    descending(a,n);
    return 0;
}
void ascending(int a[50],int n)