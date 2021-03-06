#include<iostream>
using namespace std;

int main()
{ 
 
    int n, i, t , c = 0;
    
    cout<<"Enter number of test cases";
    cin>>t;
    while(t--)
    {
        cout << "Enter any number n: "; cin>>n;
    
   for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "n is a Prime number" << endl;
    }
    else
    {
         cout << "n is not a Prime number" << endl; 
    }
     c=0;
    }
  
    return 0;    
}
