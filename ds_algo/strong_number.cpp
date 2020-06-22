#include <iostream>
using namespace std;

int calcFactorial(int n)
{
    if (n==1) return 1;
    else return n*calcFactorial(n-1);
}

void strongNumber(string num)
{
    int len = num.size();
    int total = 0;
    for (int i=0; i<len; i++){
        int n = (int)num[i] - (int)'0';
        total += calcFactorial(n);
    }
    if (total == stoi(num)) {
        cout << num << " is a strong number" << endl;
    }
    else cout << num << " is not a strong number" << endl;
}
