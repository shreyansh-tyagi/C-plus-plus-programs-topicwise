#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void multiarray(int a[50][50],int n);
void sumarray(int a[50][50],int);
void subarray(int a[][],int);
int main()
{
    int i ,j,n,a[50][50];
    cout<<"enter the row and coloumn : ";
    cin>>n;
    cout<<"\nfirst array :\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];

        }
    }
    cout<<"\n\n";
    multiarray(a,n);
    sumarray(a,n);
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
        cout<<endl;
    }
}
void sumarray(int a[50][50],int n)
{
    int i,j,b[50][50],s[50][50];
    cout<<"\nsecond array :\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\n\n";
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        
        cout<<endl;

    }
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }

    }
    cout<<"\nsum : ";
    cout<<"\n\n";
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;

    }

}