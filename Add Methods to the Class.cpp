#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int age;
public:

    Person()
    {
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

    void introduce() {
        cout << "Hello, my name is " << name << ", and I am " << age << " years old." << endl;
    }
};
int main() {
    Person person("Famid", 21);
    person.introduce();
    return 0;
}
