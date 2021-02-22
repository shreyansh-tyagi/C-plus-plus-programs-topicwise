#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
       {
           cout<<"*";

       } 
       cout<<"\n";
    }
    return 0;
}