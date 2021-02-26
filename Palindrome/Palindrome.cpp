#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;                  //A palindromic number ~ is a number that remains the same when its digits are reversed

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;

     while (num != 0);
     {
         digit = num % 10;              //the digit now stores the last digit of the number
         rev = (rev * 10) + digit;      //this method helps to reverse the number
         num = num / 10;                //This method gives the variable num , the rest of the number exlcuding the last digit 
     } 

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)                           //to check if the reversed term is equal to the original as mentioned in the defintion of Palindrome Number
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
