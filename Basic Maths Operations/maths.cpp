#include<iostream>
using namespace std;


int number1 , number2;                  //the reason why i decalred the variables outside the main function is due to the scope as since i'm using various  functions
int sum=0 , prod , division , diff , permu1=1, permu2=1;  //the functions are not in the main function hence i "globally" declared the variables and functions

void INPUT(); void SUM(); void DIFF();  void PROD(); void DIV(); void PERM(); void DIVIS(); //these are the functions i will be using per operation




void INPUT(). //the function INPUT is a function through which the user inputs two values as number1 and number2 using the input operator '>>'
{
	cout<<"\n enter two integer numbers"; //the \n takes the cursor to the next line after the curren is executed 
	 cin>>number1>>number2;
}
void SUM()        //the function SUM is a function in which we will calulate the sum of input using the '+' operator 
{
	sum=number1+number2;
	cout<<"\nSum of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<sum;
}

void DIFF() //the function DIFF is a function through which we will find the difference of the two inputs depending on which is larger using the '-' operator
{
 if(number1<number2)  //we use the if-else statement to calulate the difference of the two input by first comparing the two and finding which is larger using'<' or'>'
 {
	 diff=number2-number1;
	 cout<<"\nDifference of "<<" "<<number2<<" "<<"and"<<" "<<number1<<" "<<"is :" <<diff;
 }
 else
 {
   diff=number1-number2;
	 cout<<"\nDifference of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<diff;
 }
}

void PROD() //the function PROD is used to find the product of two functions by using the '*' operator 
{
	prod=number1*number2;
	 cout<<"\nProduct of "<<" "<<number1<<" "<<"and"<<" "<<number2<<" "<<"is :" <<prod;
}

void DIV() //the function DIV is a function through which we will find the quotient on dividing the two inputs after checking which is larger using the '/' operator
{
 if(number1<number2)
 {
	 division=number2/number1;
	 cout<<"\nDivision of "<<" "<<number2<<" "<<"by"<<" "<<number1<<" "<<"is :" <<division;
 }
 else
 {
   division=number1/number2;
	 cout<<"\nDivision of "<<" "<<number1<<" "<<"by"<<" "<<number2<<" "<<"is :" <<division;
 }
}

void PERM()     //the function PERM is used to find the permutation of the two numbers seperately by using for loopss
{               //ex of permutation , let n=4 , 4! = 4x3x2x1= 24 
  for(int i =number1 ; i>0 ; i--)   //the for loop helps us to multiply each number from 1->n
  {
	  permu1=permu1*i;      //remember to initialize variables that you'll be using in repetitive mulitplication as 1 and those of addition and subtraction as 0
  }                       //as the variables contain garbage values by default which won't change for the variable unless specified (ie , input or initialization)
 for(int i =number2; i>0 ;i--)
  {
	  permu2=permu2*i;
  }
 cout<<"\nPermutaion of "<<" "<<number1<<" "<<" is "<<" "<<permu1;
 cout<<"\nPermutaion of "<<" "<<number2<<" "<<" is "<<" "<<permu2;
}

void DIVIS() //the function DIVIS is used to check if either input values are divisible by one another again after checking on which is greater
{
 if(number1<number2)
 {
	 if(number2%number1==0)   //we use the '%' operator as it gives us the remainder of the function while '/' gives us the quotient 
	 {                        //if a number is divisible by other there will be no remainder , hence we said "number2%number1==0" then to print it's divisible
		cout<<number2<<" "<<"is divisible by"<<" "<<number1;
	 } else
	 {
		 cout<<number2<<" "<<"is not divisible by"<<" "<<number1;
	 }
	 
 }
 else if (number1>number2)
 {
   if (number1%number2==0)
	 {
		cout<<number1<<" "<<"is divisible by"<<" "<<number2;
	 } else
	 {
		 cout<<number1<<" "<<"is not divisible by"<<" "<<number2;
	 }
 }
 else
 {
	 cout<<"Neither numbers are divisible by one another ";
 }
}

int main()
{                 //the functions mentioned in the main will be executed in order starting from INPUT and ending at DIVIS 
	 INPUT();
	 SUM();
	DIFF();
	 PROD();
	 DIV();
	 PERM();
	 DIVIS();
	return 0;
}
