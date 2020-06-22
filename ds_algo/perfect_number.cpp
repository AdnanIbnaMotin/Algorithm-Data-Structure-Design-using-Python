#include <iostream>
using namespace std;

void perfect_number(int n)
{
    int total = 0;
    for (int i=1; i<n; i++) {
        if (n%i == 0)
            total += i;
    }
    if (n == total) cout << n << " is a perfect number" << endl;
    else cout << n << " is not a perfect number" << endl;
}
