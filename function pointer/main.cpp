#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void function(int * , int *,int * );
int main()
{
    int a,b,c;
    cout<<"\nenter the value of a and b:\n";
    cin>>a>>b;
    cout<<"the value of a and b: "<<a<<" "<<b<<endl; 
    void (*function_pointer)(int *,int *,int *);
    function_pointer=&function;
    function_pointer(&a,&b,&c);
    cout<<"the value of a and b after swapp: "<<a<<" "<<b<<endl;
    cout<<"the sum of a and b: "<<c<<endl;
    return 0;
}
void function(int *a,int *b,int *c)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    *c=*a+*b;
    cout<<"the value of a and b in function:"<<a<<" "<<b<<endl;
    cout<<"swapped value of a and b:"<<*a<<" "<<*b<<endl;
    cout<<"the sum of a and b in function: "<<*c<<endl;
     
}