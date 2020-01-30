#include <iostream>
using namespace std;

int main(){
    int userInput;

    while (userInput != 0) {
    cout << "Enter a year to determine if it is a leap year or not: ";
    cin >> userInput;

    // to be a leapyear the year cannot equal to zero if divided by 100 and it must be evenly divisible by 4
    // if the year is evenly divisible by 400 then it is a leap year
    
    if (userInput % 100 != 0 && userInput % 4 == 0 || userInput % 400 == 0) 
    {
        cout << userInput << " is a leap year." << endl;
    }
    else
    {
        cout << userInput << " is not a leap year." << endl;
    }
    }
}