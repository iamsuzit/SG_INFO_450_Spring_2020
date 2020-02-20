//byValue and byReference example

#include <iostream>
using namespace std;

void passByValue(int x, int y)
{
    int z=x;
    x=y;
    y=z;

}


void passByReference(int &x, int&y)
{
    int z=x; //temporary variable : x value is assigned to z which is 5 (x is 5 and y is 6) now z is 5
    x=y; //y value is assigned to x, which is 6 now x is 6 
    y=z; //z value is now assigned to y, which is 5
}

int main(){
    int a=5, b=6, print;
    cout<< "Before swapping " <<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

    //passByValue(a, b); call function for pass by value

    passByReference(a, b);
    cout<< "After swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    return 0;

}

