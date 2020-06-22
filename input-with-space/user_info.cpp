/*
A small application that allows users to input various details
*/

#include <iostream>
using namespace std;

int main()
{
    string firstName, lastName;
    int age;

    cout << "Please enter your first name: ";
    getline(cin, firstName);

    cout << "Please enter your last name: ";
    getline(cin, lastName);

    cout << "What is you age: ";
    cin >> age;

    cout << "You name is: " << firstName << " " << lastName << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;

}