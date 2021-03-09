#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void multiarray(int [][],int)
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
    return 0;
}