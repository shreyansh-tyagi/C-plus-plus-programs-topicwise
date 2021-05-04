#include <stdio.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;

char* armstrong(int input1);
int main()                // Armstrong number ~ the sum of cubes of each digit is equal to the number itself.
{
    char *s;
    int n;
    scanf("%d",&n);
    s=armstrong(n);
    printf("%s",s);
    
}
char* armstrong(int input1)
{
    int original,rem,result=0,count=0,n;
    original=input1;
    n=input1;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
     while (original != 0)                       
    {
        rem = original % 10;                  //rem gives the last digit of the number
        result = result + pow(rem,count);    //to find the sum of cube of digits of the number 
        
        original = original / 10;             //original now contains all the digits excluding the last digit 
    }
    if(result==input1)
    {

        return "Yes";

    }
    else{
        return "No";
    }

}
