#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void swap(int *,int *);
int main()
{
    int a,b;
    cout<<"\nenter the value of a and b to swap the number: \n";
    cin>>a>>b;
    swap(&a,&b);
    cout<<""
    return 0;
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"\n after swap the value of x and y is: "<<*x<<" "<<*y;

}