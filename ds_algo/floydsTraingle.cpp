#include <iostream>
using namespace std;

void floyds_traingle(int n) {
    int k = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            k++;
            cout << k << " ";
        }
        cout << endl;
    }
}
