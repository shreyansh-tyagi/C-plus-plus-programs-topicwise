#include<iostream>
using namespace std;

int main()
{
  int num ;
  cin>>num;
  
  int rev = 0 , digit;
   
  while(num > 0)
    {   
        digit= num%10;              //digit stores the last digit of the number as '% 10 ' returns the remainder of the 'number / 10' which is the last digit
        rev = (rev*10) + digit ;    //rev is now stored the last digit of the number as the first number
        num = num/10;               //num  now contains the remaining digits if the number excluding the last digit
    }
    cout << "Reverse of the number is " << rev;
    return 0;
}
