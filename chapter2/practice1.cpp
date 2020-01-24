#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "What is your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "You're under age!";
    }
    else
    {
        cout << "You're old enough to drink";
    }

    return 0;
}