
#include <iostream>
using namespace std;

int main()
{
    double num;
    double finalVal;
    while (num > 0) {
    cout << "Enter a positive number to calculate its sqaure value: ";
    cin >> num;
    finalVal = num * num;
        
    cout << "Your square value of the entered number is " << finalVal  << endl;

    }

    return 0;
}
