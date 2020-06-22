#include <iostream>
using namespace std;


class Person {
    public:
        string name = "";
        int age = 0;
    
    Person(string name, int age) : name(name), age(age) {};

    bool operator == (Person const & other) {
        return (age == other.age) && (name == other.name);
    }

};

int main()
{
    Person PersonA = Person("Lucky", 24);
    Person PersonB = Person("Lucky", 24);
    Person PersonC = Person("John", 22);

    cout << (PersonA == PersonB) << endl;
    cout << (PersonB == PersonC) << endl;
    
    return 0;
}