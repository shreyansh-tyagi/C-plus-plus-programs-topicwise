#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,k,l,n,m;
    cout<<"enter the size of diamond: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    n=m;
    for(l=0;l<n;l++)
    {
        for(j=0;j<=l;j++)
        {
            cout<<" ";
        }
        for(k=m;k>0;k--)
        {
            cout<<" *";
            m--;

        }
        
        cout<<"\n";
    }
    return 0;
}