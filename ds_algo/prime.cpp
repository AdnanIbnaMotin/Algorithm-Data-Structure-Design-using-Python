#include <iostream>
using namespace std;

int prime(int n) {
    if (n == 1) {
        cout << n << " is not a prime number" << endl;
        return n;
    }
    else if (n == 2) {
        cout << n << " is a prime number" << endl;
        return n;
    }
    else {
        for (int i=2; i<n; i++) {
            if (n%i == 0) {
                cout << n << " is not a prime number" << endl;
                return n;
            }
        }
        cout << n << " is a prime number" << endl;
        return n;
    }
}
