#include <iostream>
#include <array>
using namespace std;

int main()
{
    int arr[5] = {}; // initialized all to 0
    array<int, 3> a {1, 2, 3};

    // Build-in array
    for (int i: arr) {
        cout << i << endl;
    }
    // container library array
    cout << "Container Library Array" << endl;
    for (int i: a) {
        cout << i << endl;
    }
}