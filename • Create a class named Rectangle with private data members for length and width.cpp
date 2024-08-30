#include<iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;
public:
    Rectangle(double x,double y)
    {
        length=x;
        width=y;
    }
    double area()
    {
        return length*width;
    }
};
double combined (Rectangle r1,Rectangle r2)
{
    return r1.area()+r2.area();
}
int main()
{
    Rectangle obj1(5.00,5.00);
    Rectangle obj2(5.00,5.00);
    cout<<"Area:"<<combined(obj1,obj2)<<endl;
}
