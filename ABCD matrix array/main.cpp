#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    char a[50][50],i,j,r1,c1;
    cout<<"enter the row and coloumn:";
    scanf("%s%s",r1,c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%s",a[i][j]);
        }
       
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}