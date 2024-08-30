#include<iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
public:
    void setName(string x)
    {
        name=x;
    }
    void setAge(int y)
    {
        age=y;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    void display()
    {
        cout<<getName()<<endl<<getAge()<<endl;
    }
};
int main()
{
    person obj;
    obj.setName("Famid Khandoker");
    obj.setAge(21);
    //cout<<obj.getName()<<endl;
   // cout<<obj.getAge()<<endl;
   obj.display();
}
