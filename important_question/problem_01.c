#include <stdio.h>

int main()
{
    // One
    printf("%d\n", printf("%s\n", "Hello World"));

    // Two
    printf("%10s\n", "Hello");

    // Three
    char c = 255;
    c+=10;
    printf("%d\n", c);

    // Four
    signed int i;
    signed j; // compiler autometically put int here
    unsigned int k;
    long l; // same here
    long int m;
    long long n; // same here

    // Five
    unsigned a = 1;
    int b = -4;
    printf("%u\n", a+b);

    return 0;
}