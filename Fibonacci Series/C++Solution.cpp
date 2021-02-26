#include <iostream>
using namespace std;

int main()   //The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
{                              
 int term1=0 , term2=1 , term3 , i , number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<"Fibonacci Series :"<<" "<<term1<<" , "<<term2<<" , "; 
    
 for(i=2;i<number;++i)  
 {    
  term3=term1+term2;    //The next term of the series is found by adding the current term by the previous term
  cout<<term3<<" , ";    
  term1=term2;    //now ther current term is now the  previous term
  term2=term3;    //the current term is the calculated term
 }    
   return 0;  
   }  
