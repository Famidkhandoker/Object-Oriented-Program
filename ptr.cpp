#include<iostream>
using namespace std;
class Example
{
public:
    int *ptr;
    Example(int val)
    {
        ptr=new int(val);
    }
    void display()
    {
        cout<<"value: "<<*ptr<<endl;
        cout<<" Address: "<<ptr<<endl;
    }
    void set_val(int n)
    {
        *ptr=n;
    }
};
int main()
{
    Example obj1(10);
    Example obj2=obj1;

    obj1.display();//10//0x181750
    obj2.display();//10//0x181750

    obj2.set_val(20);
    obj1.display();//20//0x181750
    obj2.display();//20//0x181750
    return 0;

}

