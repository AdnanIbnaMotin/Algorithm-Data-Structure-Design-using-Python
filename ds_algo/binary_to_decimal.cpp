#include <iostream>
#include <math.h>
using namespace std;

void binaryToDecimal(string s)
{
    int len = s.size();
    int d = 0;
    for (int i=0; i<len; i++) {
        int z = (int)s[len-i-1] - (int)'0';
        d += z * pow(2, i);
    }
    cout << d << endl;
}
