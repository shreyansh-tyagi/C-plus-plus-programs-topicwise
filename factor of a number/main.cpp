#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"\nenter the number of which you want to find the factor: ";
    cin>>n;
    cout<<endl;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
             i++;
        }
        else{
            i++;
        }
       
    }

    return 0;
}