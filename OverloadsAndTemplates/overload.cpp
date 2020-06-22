#include <iostream>
using namespace std;

int addition(int a, int b, int c)
{
    return a+b+c;
}

float addition(float a, float b)
{
    return a+b;
}
int main()
{
    cout << "Addition of three numebr: " << addition(1, 2, 3) << endl;
    cout << "Addition of two number: " << addition(1.5,2.8) << endl;
}