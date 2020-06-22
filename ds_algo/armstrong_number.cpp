#include <iostream>
#include <math.h>
using namespace std;

void armstrong_number(string num)
{
    int len = num.size();
    int total = 0;
    for (int i=0; i<len; i++){
        int z = (int)num[i] - (int)'0';
        total += pow(z, len);
    }
    if (total == stoi(num)) {
        cout << "This is an armstrong number" << endl;
    }
    else {
        cout << "This is not an armstrong number" << endl;
    }
}
