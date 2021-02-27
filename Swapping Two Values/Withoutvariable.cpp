#include <iostream>  
using namespace std;  
int main()  
{  
int a , b;   
cout<<"Enter 2 numbers for swapping";
cin>>a>>b;

cout<<"Before swap : "<<a<<"  "<<b<<endl;      //to demonstrate how this method works let a be 5 and b be 10
a=a*b;                                          //a=50 (5*10)    
b=a/b;                                          //b=5 (50/10)    as '/' operator returns the quotient of the operation
a=a/b;                                          //a=10 (50/5)    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}  
