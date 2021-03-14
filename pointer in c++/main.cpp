#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,*p;
    cout<<"enter the value to access through pointer: ";
    cin>>i;
    *p=&i;
    cout<<"\nthe value of i is :  "<<i<<endl;
    cout<<"\n the value of p is : "<<p<<endl;
    cout<<"\nthe va"
    return 0;
}