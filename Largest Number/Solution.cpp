#include <iostream>
using namespace std;

int main() 
{    
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)                             //the largest number of three numbers is larger than the two other numbers 
        cout << "Largest number: " << n1;                 // let there be three numbers 1 , 5 , 2 , so we know that 5 is the largest number this is because 5
                                                          // is greater than both 1 and 2 , so we print the number that is larger than the other 2
    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;
  
    return 0;
}
