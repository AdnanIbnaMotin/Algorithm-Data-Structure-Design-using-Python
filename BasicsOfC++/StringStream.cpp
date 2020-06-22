#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s;
    int num;
    char ch;
    cin >> s;
    stringstream ss(s);

    cout << "Hello World" << endl;
    while(ss >> num) {
        cout << num << endl;
        ss >> ch;
    }
}