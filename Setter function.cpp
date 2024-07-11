#include<iostream>
using namespace std;
class Rectangle
{
private:
    int height,width;
public:
    void area()
    {
        cout<<height*width<<endl;
    }
    void perimeter()
    {
        cout<<2*(height+width)<<endl;
    }
    void set-h-w(int h,int w)
    {
        height=h;
        width=w;
    }
    void display ()
    {
         cout<<height<<" "<<width<<endl;
    }

};
int main()
{
    Rectangle r1;
    r1.set-h-w(10,20);
    r1.display();
    r1.area();
    r1.perimeter();
    r1.diagonal();
}
