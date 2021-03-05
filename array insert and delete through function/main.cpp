#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void insert(int [],int);
void delete1(int [],int)
int main()
{
    int i,n,a[50];
    cout<<"enter the size of array: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"first array : ";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    insert(a,n);
    delete1(a,n);
    return 0;
}
voi