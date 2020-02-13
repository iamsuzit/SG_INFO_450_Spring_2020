#include <iostream>
#include <cmath>
using namespace std;

double mean();

int main()
{
    int userInput [10]; 
    int i;
    double sum = 0;
    double varaince; 
    double mean;
    double standardDev;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number for index " << i  << ": ";
        cin >> userInput[i]; //storing user input
        sum += userInput[i]; //add the user inputs
    }
    
    mean = (sum / 10);
/* to calculate the Variance, for each number, subtract the mean and square the result.
square it, and then average the result. 
*/
    for (i = 0; i < 10; ++i)
    {
        varaince += pow(userInput[i] - mean, 2);
        varaince = varaince / 10;
        standardDev = sqrt(varaince);
    }
    
    cout << "Mean: " << mean << " Standard Deviation: " << standardDev << endl;
}

