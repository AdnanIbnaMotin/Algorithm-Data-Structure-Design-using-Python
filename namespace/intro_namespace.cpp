#include <iostream>
using namespace std;


namespace People {
    void Adnan() {
        cout << "Bio: Computer Engineer" << endl;
    }
    void Afsan() {
        cout << "Bio: Doctor" << endl;
    }
}
namespace Animal {
    void Tiger() {
        cout << "Tiger" << endl;
    }
    void Lion() {
        cout << "Lion" << endl;
    }
}
int main()
{
    People::Adnan();
    People::Afsan();
    Animal::Tiger();
    Animal::Lion();
}