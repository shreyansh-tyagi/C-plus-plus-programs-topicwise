#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)               //as leap years happen every 4 years , the year will have to be divisible by 4 and not a multiple of 100
    {
        if (year % 100 == 0)        //if the year is a multiple of 100 , we should check if it's a multiple of 400
        {
            if (year % 400 == 0)      //if the year is a multiple of 400 we say it's a leap year
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";  //now if the year is a multiple of 4 and 100 and not 400 it is not a leap year 
        }
        else
            cout << year << " is a leap year.";     //if the year is a multiple of 4 and is not a multiple of 100 it is a leap year
    }
    else
        cout << year << " is not a leap year.";   //if the year is not a multiple of 4 it is not a leap year

    return 0;
}
