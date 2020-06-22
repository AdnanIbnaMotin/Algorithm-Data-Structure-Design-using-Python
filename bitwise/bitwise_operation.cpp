#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int a = 6; //  6 - 00110
    int b = 12; // 12 - 01100
    cout << bitset<5> (a & b)  << endl;

    cout << bitset<5> (a | b) << endl;

    cout << bitset<5> (~a) << endl;

    cout << bitset<5> (a >> 2) << endl;

    cout << bitset<5> (b << 2) << endl;
    
    return 0;
}
