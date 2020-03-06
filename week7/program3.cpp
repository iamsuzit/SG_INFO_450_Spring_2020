#include <iostream>
#include <string>
using namespace std;

string capitalize(string *s1);

int main(){
    string userInput;
    string capitalize_string;
    do{
        cout<< "Enter a string: ";
        getline(cin, userInput);
        capitalize_string = capitalize(&userInput);
        cout << "Your capitalized string is: " << capitalize_string << endl;
    }while(!userInput.empty());
}

string capitalize(string *s1){
    string retval;
    int string_length = s1->length();
    for(int x=0; x < string_length; x++)
    {
        char c = s1->at(x); //this is saying s1 at x. eg. if 'Hello' then 0 is H and s1 at x would be H
       if (c >= 97 && c <= 122)
       {
           c -=32; //asci chart
       }
       
        retval += c;
    }

    return retval;
}