#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void insertion(int [],int);
int main()
{
    int i,n,a[50];
    cout<<"enter the size of array: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nfirst array : ";
    insertion(a,n);
    
    return 0;
}
