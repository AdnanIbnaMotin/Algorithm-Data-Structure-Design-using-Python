#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n==0) return 1;
    if (n==1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

void printFibonacciSeries(int a, int b, int target) {
    int firstNum = b;
    int secondNum = a+b;

    if (firstNum > target) {
        cout << endl;
        return;
    }
    else{
        cout << firstNum << " ";
        return printFibonacciSeries(firstNum, secondNum, target);
    }

}
