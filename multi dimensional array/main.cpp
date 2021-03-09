#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void multiarray(int a[50][50],int n);
int main()
{
    int i ,j,n,a[50][50];
    cout<<"enter the row and coloumn : ";
    cin>>n;
    cout<<"\nfirst array : ";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];

        }
    }
    multiarray(a,n);
    return 0;
}
void multiarray(int a[50][50],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
}