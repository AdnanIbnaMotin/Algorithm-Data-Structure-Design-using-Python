#include <iostream>
using namespace std;

int main() 
{
    int a[5] = {1, 2, 3, 4, 5};
    int* pt = nullptr;

    pt = &a[2];

    cout << (*pt == a[2]) << endl;

    cout << (pt + 3) << endl;
    cout << &a[5] << endl;
}