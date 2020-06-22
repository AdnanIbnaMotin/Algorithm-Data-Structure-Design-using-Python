#include <iostream>
using namespace std;


void decrement(int &num) {
    num--;
}
void getNextName() {
    string name;
    cout << "Please enter you name: ";
    getline(cin, name);

    cout << "Welcome " << name << endl;
}
int main() {
    int num = 10;
    getNextName();
    
    decrement(num);
    cout << num << endl;
    return 0;
}

