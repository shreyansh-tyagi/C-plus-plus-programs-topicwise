#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
//int div(int,int);
int main()
{
    int a ,b,c,d,e,f;
   // float f;
    cout<<"enter two numbers : \n";
    cin>>a>>b;
    c=add(a,b);
    d=sub(a,b);
    e=mul(a,b);
    //f=div(a,b);
    cout<<"sum: "<<c<<endl<<"subtarction: "<<d<<endl;
    return 0;
}
int add(int a ,int b)
{
    return (a+b);
}
int sub(int a ,int b)
{
    return (a-b);
}
int mul(int a ,int b)
{
    return (a*b);
}
/*int div(int a ,int b)
{
    return (abs(a/b));
}*/