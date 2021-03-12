#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,n,a[50];
    cout<<"enter the size of array: ";
    cin>>n;
    for(i =0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nthe array is : \n";
    for(i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n the reverse of array is  :\n";
    
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}