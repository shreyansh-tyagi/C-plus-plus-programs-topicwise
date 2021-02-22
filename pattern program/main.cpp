#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,n,k;
    cout<<"enter the value of n: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j<i;j--)
        {
            cout<<" ";

        }
        for(k=0;k<i;k++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}