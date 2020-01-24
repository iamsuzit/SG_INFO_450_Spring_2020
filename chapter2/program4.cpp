/* This program converts gallons to liters using
floating point numbers. */

#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double liters;

    cout << "Enter number of gallons: ";
    cin >> gallons; // this inputs from the user

    liters = gallons * 3.7854; // convert to liters

    cout << "Liters: " << liters << "\n";

    return 0;
}