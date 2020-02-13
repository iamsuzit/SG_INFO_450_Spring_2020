#include <iostream>
#include <string>
using namespace std;

int main(){

    char student_name[30][100];

    int i;

    for(i = 0; i < 30; i++)
    {
        cout << "Please enter student for index " << i << ":";
        cin.getline (student_name[i], 100);    
        
    for (int i = 0; i < 30; i++)
    {
        if (student_name[i] == "\0")
        {
            cout << "Students" << student_name[i];
        }
    }
    }    


        
    return 0;
        
}