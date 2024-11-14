//Base class/parent class- public
//Inherited class type -public
//Derived class/access type -public

#include<iostream>
using namespace std;
class parent{
public:
    void show1(){
    cout<<"Parent class"<<endl;
    }
};
class child: public parent{
    public:
    void show2(){
    cout<<"child class"<<endl;
    }
};
int main()
{
    child c;
    c.show1();//Parent class
    c.show2();//child class
    parent p;
    p.show1();//Parent class
    return 0;
}
