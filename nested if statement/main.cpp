#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
        {
            cout<<"a is greater";
        }

    }
    else if(b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
}