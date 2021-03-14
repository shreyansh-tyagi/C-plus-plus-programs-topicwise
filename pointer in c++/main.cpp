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
    p=&i;
    cout<<"\nthe value of i is :  "<<i<<endl;
    cout<<"\nthe address of i is : "<<&i<<endl;
    cout<<"\n the value of p is : "<<p<<endl;
    cout<<"\nthe value through pointer is : "<<*p<<endl;
    return 0;
}