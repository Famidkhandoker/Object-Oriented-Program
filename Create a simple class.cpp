#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;

};
int main()
{
    person obj;
    obj.name="Famid";
    obj.age=21;
    cout<<obj.name<<endl<<obj.age<<endl;
}
