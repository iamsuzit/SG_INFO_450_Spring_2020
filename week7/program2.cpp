#include <iostream>
#include <string>

using namespace std;


int main(){

    string userInput;
    string s2;

    for(int i = userInput.size()-1; i >= 0; --i)
    {
    cout << "Enter a word or sentence to reverse: ";
    getline(cin, userInput);
    if(userInput != '\0')
    {
        s2 += userInput[i];
        cout << userInput;
    }
    else
    {
        break;
    }
    }   
}
