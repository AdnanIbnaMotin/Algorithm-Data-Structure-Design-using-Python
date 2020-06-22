#include <iostream>
using namespace std;

int bitWiseAddition(int a, int b)
{
    int sum = a ^ b;
    int carry = (a & b) << 1;

    if (carry == 0) {
        return sum;
    }
    else return bitWiseAddition(sum, carry);
}
