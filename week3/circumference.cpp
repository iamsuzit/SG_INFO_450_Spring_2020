#include <iostream>
using namespace std;

const float Pi = 3.14159265358979323846; //global variable 

double calculateCircumference(double radius); /* forward declaration is needed here if i call the function in my main bcos compiler reads
code line by line and when it reaches code 14 it will not find if i dont have it up here */

int main(){
    double userInput;
    cout << "Please enter a radius of a circle to calculate circumference: ";
    cin >> userInput;

    double circumference = calculateCircumference(userInput); //calling function and saving it in circumference

    cout << "The circumference of the radius is " << circumference << endl;
    return 0;
}

//c = 2piR
//signature declaration 
double calculateCircumference(double radius){  
    return radius *= Pi * 2;
}