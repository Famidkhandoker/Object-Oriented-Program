#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:

    void set_name(string x)
    {
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

int main()
{
    Person obj;
    obj.set_name("Famid");
    obj.set_age(21);
    cout<< obj.get_name() << endl;
    cout<< obj.get_age() << endl;
    return 0;
}
