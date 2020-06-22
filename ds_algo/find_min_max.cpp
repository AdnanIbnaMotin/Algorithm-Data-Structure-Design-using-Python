#include <iostream>
using namespace std;

void findMinMax(int* arr, int& min, int& max, int len) {

    max = min = *arr;

    for (int i=1; i < len; i++) {
        if (*(arr+i) < min) {
            min = *(arr+i);
        }
        if (*(arr+i) > max) {
            max = *(arr+i);
        }
    }
}
