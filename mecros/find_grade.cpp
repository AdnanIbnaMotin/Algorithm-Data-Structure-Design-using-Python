/*
A small application that will give a test score a letter grade
*/

#include <iostream>
using namespace std;

#define GRADE_C_THRESHOLD 25
#define GRADE_B_THRESHOLD 50
#define GRADE_A_THRESHOLD 75

int main()
{
    int value = 0;

    cout << "Enter a value in between (0 - 100): ";
    cin >> value;
    
    if (value < GRADE_C_THRESHOLD) {
        cout << "Fail" << endl;
    }
    else if (value < GRADE_B_THRESHOLD) {
        cout << "Pass: Grade C" << endl;
    }
    else if (value < GRADE_A_THRESHOLD) {
        cout << "Pass: Grade B" << endl;
    }
    else {
        cout << "Pass: Grade A" << endl;
    }
    
    return 0;
}