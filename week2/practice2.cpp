#include <iostream>
using namespace std;

int main(){
    int userInput;
    
    do {
        
        int countVar = 0;
        if (userInput == 0){
            break;    

        }
        
    cout << "Enter a positive number to check whether it is prime or not: ";
    cin >> userInput;

 //iteration starts from 1 and loops till it equal to userInput
 //if the userInput is less than or equal to i then it will go thru if statement
 //in if statement, if userInput is divisible by i then counter variable increments 
 //it keeps looping until i  equal to userInput
 //when i equals to userInput and it passes the if statement and counter var is increased to 2 then it is prime
    for(int i = 1; i <= userInput; i++){
        if((userInput % i) == 0)
        {
            countVar++;
        }
    }
    if (countVar == 2)
    {
        cout << userInput << " is a prime number." << endl;
    }
    else
    {
        cout << userInput << " is not a prime number." << endl;
    }
    }while(userInput != 0);

}