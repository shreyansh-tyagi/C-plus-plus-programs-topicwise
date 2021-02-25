#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,k,l,n;
    cout<<"enter the size of diamond: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" ";
        }
        for(k=0;k<i;k++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    for(l=0;l<n;l++)
    {
        for(j=0;j<n;j++)
        {
            cout<<""
        }
    }
    return 0;
}