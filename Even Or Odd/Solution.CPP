#include<iostream>
using namespace std;

int main ()
{
 int a ;
  cout<<"Enter a number to find if it is even or odd ";
  cin>>a;
  
  if(a%2==0)                     //if a number is an even number , it will have no remainder when divided by 2 ('%' returns the remainder of the operation)
  {                              //hence why we say if the number is divisble by 2 , it is even 
    cout<<a<<" "<<"is an even number"; 
  }
  else
  {
    cout<<a<<" "<<"is an odd number"; //if a number is not even ( ie n%2!=0) the number is odd
  }
  return 0;
}
