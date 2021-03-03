#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int sum,i,n,a[50];
    cout<<"enter the size of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nfirst array is :\n";
    for(i=0;i<n;i++)
    {
        cout<< a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"\nsum of array is : "<<sum;
    return 0;
}
