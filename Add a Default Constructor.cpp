#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person() {
        name = "Unknown";
        age = 0;
    }
    void set_name(string x) {
        name = x;
    }

    void set_age(int y) {
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
    Person obj;
    cout<< obj.get_name()<< endl;
    cout << obj.get_age()<< endl;
    return 0;
}
