#include <iostream>
using namespace std;

#define HELLO_WORLD "Hello World!"
#define MULTIPLY(a, b) (a * b)

int main()
{
    #ifdef HELLO_WORLD
        cout << HELLO_WORLD << endl;
    #endif
    cout << MULTIPLY(5, 4) << endl;

    #undef HELLO_WORLD

    #ifndef HELLO_WORLD
        cout << "HELLO_WORLD is undefined" << endl;
    #endif

    return 0;
}