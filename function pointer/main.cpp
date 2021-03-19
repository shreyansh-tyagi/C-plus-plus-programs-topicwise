#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void function(int * , int * );
int main()
{
    int a,b;
    cout<<"\nenter the value of a and b:\n";
    cin>>a>>b;
    void (*function_pointer)(int *,int *);
    function_pointer=&function;
    function_pointer(&a,&b);
    cout<<"the value of a and b: "<<a<<" "<<b<<endl; 
    return 0;
}
void function(int *a,int *b)
{
    int temp=0,c;
    temp=*a;
    *a=*b;
    *b=temp;
    c=*a+*b;
    cout
}