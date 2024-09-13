#include<iostream>
using namespace std;
class samp
{
    int i;
public:
    samp(int n)
    {
        i=n;
        cout<<"constructing \n";
    }
    void set_i(int n)
    {
        i=n;
    }
    int get_i()
    {
        return i;
    }
    ~samp()
    {
        cout<<"Destructing \n"<<endl;
    }
};
void sqr_it(samp *o)
{
    o->set_i(o->get_i()*o->get_i());
    cout<<"copy of a has i value of "<<o->get_i();
    cout<<" \n";
}

void sqr_it(samp o)
{    o.set_i(o.get_i()*o.get_i());
    cout<<"copy of a has i value of "<<o.get_i();
    cout<<" \n";
}
int main()
{
    samp a(10);
    sqr_it(a);// constructing//100//Destructing
    //sqr_it(&a);
    cout<<"Original value of a:"<<a.get_i()<<endl;//10//destructing
    return 0;
}
//samp a(10);
   //sqr_it(a);
   //output
//constructing
//copy of a has i value of 100
//Destructing

//Original value of a:10
//Destructing

 //samp a(10);
    //sqr_it(&a);
    //output
   // constructing
//copy of a has i value of 100
//Original value of a:100
//Destructing


