#include <iostream>
using namespace std;

int main()                // Armstrong number ~ the sum of cubes of each digit is equal to the number itself.
{
    int num, original, rem, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    original = num;

    while (original != 0)                       
    {
        rem = original % 10;                  //rem gives the last digit of the number
        result = result + rem * rem * rem;    //to find the sum of cube of digits of the number 
        
        original = original / 10;             //original now contains all the digits excluding the last digit 
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
