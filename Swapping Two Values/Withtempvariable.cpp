#include<iostream>
using namespace std;

int main()
{
  int a , b , temp;
  cout<<"Enter two values for swapping";
  cin>>a>>b;
  
  temp=a;                                   //if we try to swap directly ie a=b and b=a , it will not work as let a be 5 and b be 10
  a=b;                                      //so then according to that logic , 5=10 and 10=5 , which does not make sense hence we use the temp variable so 
  b=temp;                                   //that it makes swapping easier , with the same example , but in this case temp =a , so temp is now 5
                                            // and a has no value , so then we say let a store b value so now a is 10 , temp is 5 and b has no value ,
  cout<<a<<" "<<b;                          // so now we say b=temp , so now a is 10 , b is 5 and temp is empty , so we successfully swapped the two values
  return 0;
  }
