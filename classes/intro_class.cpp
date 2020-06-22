#include <iostream>
using namespace std;

class MyClass 
{
    private:
        string date = "06/11/2020";
    public:
        void name() {
            cout << "My name is Adnan Rahman" << endl;
        }
        string getDate() {
            return date;
        }

};

int main()
{
    MyClass obj;
    obj.name();
    cout << "Today is " << obj.getDate() << endl;
}