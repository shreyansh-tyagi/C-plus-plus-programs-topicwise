#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;                                    //we use m=n/2 as generally we check if the number is divided till half of it's number ,
  for(i = 2; i <= m; i++)                   // for example take 20 , it is divisble by 2 , 4  , 5 , 10 which lies before the halfway value ..ie 10
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;       //we use a flag as a way of saying , ok so this number is divisble by something else but 1 and itself 
          break;  
      }  
  }  
  if (flag==0)  //so now we're checking if the flag has a value and if it doesn't , it means the number is divisble by only 1 and itself , so hence prime
      cout << "Number is Prime."<<endl;  
  return 0;  
}  
