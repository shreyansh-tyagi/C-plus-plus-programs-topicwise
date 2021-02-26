#include<iostream>
using namespace std;

int reversDigit(int num)
{
    int rev = 0;
    while(num > 0)
    {
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}
 

int main()
{
    int num ;
  cin>>num;
    cout << "Reverse of no. is "
         << reversDigit(num);

    return 0;
}
