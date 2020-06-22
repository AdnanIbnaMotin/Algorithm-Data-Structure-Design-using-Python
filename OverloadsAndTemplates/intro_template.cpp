#include <iostream>
using namespace std;

template<class T, class U>
U sum(T a, U b)
{
    U result = a + b;
    return result;
}

int main()
{
    cout <<"Integer sum: " << sum<int>(10, 20.5) << endl;
    cout << "Float sum: " << sum<float>(4.5, 2.2) << endl;
}