#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"enter the value of n: ";
    cin>>n;
    while(i<=n)
    {
        cout<<"we are in while"<<endl;
        i++;
    }
    cout<<"\n\nwhile loop terminated after: "<<i;
    cout<<" iteration";

    return 0;
}