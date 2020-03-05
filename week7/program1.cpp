#include <iostream>
#include <string>

using namespace std;

string reverse(string *s1);

int main(){
    string userInput;
    cout << "Enter a word or sentence to reverse: ";
    getline(cin, userInput);

     
    string input2 = reverse(userInput);
    cout << userInput;

     
}

string reverse(string *s1){
    string s2;
    for(int i = s1 -> size()-1; i >= 0 ; --i)
    {
        s2 += s1[i];
    }
    return s2; 
}