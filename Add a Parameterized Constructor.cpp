#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        name = "Unknown";
        age = 0;
    }


    Person(string x, int y)
    {
        name = x;
        age = y;
    }
    void set_name(string x) {
        name = x;
    }

    void set_age(int y)
    {
        age = y;
    }
    string get_name()
    {
        return name;
    }

    int get_age()
     {
        return age;
    }
};

int main() {
    Person obj1;
    cout << obj1.get_name() << endl;
    cout<< obj1.get_age() << endl;

    Person obj2("Famid",21);
    cout << obj2.get_name() << endl;
    cout << obj2.get_age() << endl;
    return 0;
}

