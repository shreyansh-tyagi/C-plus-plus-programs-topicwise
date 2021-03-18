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
    cout<<"before swap the value of and b is: \n"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"\nafter swap the value of a and b is: "<<a<<" "<<b<<endl;
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