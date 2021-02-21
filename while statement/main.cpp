#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"enter the value of n: ";
    cin>>n;
    while(i<n)
    {
        cout<<"we are in while\n";
        i++;
    }
    cout<<"\n\nwhile loop terminated after: "<<i;
    cout<<"iteration";

    return 0;
}