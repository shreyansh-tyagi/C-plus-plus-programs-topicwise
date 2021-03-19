#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int function(int , int );
int main()
{
    int a,b,*p;
    cout<<"\nenter the value of a and b:\n";
    cin>>a>>b;
    int (*function_pointer)(int,int);
    function_pointer=&function;
    
    return 0;
}