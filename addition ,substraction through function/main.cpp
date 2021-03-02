#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
void divi(int,int);
int main()
{
    int a,b,c,d,e,f;
   // float f;
    cout<<"enter two numbers : \n";
    cin>>a>>b;
    c=add(a,b);
    d=sub(a,b);
    e=mul(a,b);
    
    cout<<"sum: "<<c<<endl<<"subtarction: "<<d<<endl<<"multiplication: "<<e<<endl;
    divi(a,b);
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
void divi(int a ,int b) //the function DIV is a function through which we will find the quotient on dividing the two inputs after checking which is larger using the '/' operator
{
    int d;
 if(a<b)
 {
	 d=b/a;
	 cout<<"\nDivision of "<<" "<<b<<" "<<"by"<<" "<<a<<" "<<"is :" <<d;
 }
 else
 {
   d=a/b;
	 cout<<"\nDivision of "<<" "<<a<<" "<<"by"<<" "<<b<<" "<<"is :" <<d;
 }
}