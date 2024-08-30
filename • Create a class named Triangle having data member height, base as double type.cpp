#include<iostream>
using namespace std;
class Triangle
{
private:
    double height;
    double base;
public:
    Triangle(double x,double y)
    {
        height=x;
        base=y;
    }
    double area()
    {
        return 0.5*height*base;
    }
};
int main()
{
    Triangle obj1(10.00,10.00);
    Triangle obj2(obj1);
    cout<<"Area:"<<obj2.area()<<endl;
}

