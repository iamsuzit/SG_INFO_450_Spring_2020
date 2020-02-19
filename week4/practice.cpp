#include <iostream>
using namespace std;

// Function prototype (declaration)
double diff (double, double);

int main()
{
    double num1, num2, difference;
    cout << "Enter two number to find the difference: ";
    cin >> num1 >> num2;

// Function call
    difference = diff(num1, num2);
    cout << difference;

    return 0;
}

// Function call
double diff(double a, double b)
{
    double diff;
    diff = a - b;

    // Return statement
    return diff;
}