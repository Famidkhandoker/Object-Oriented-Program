#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
public:
    int height;
    int width;
    void area()
    {
        cout<<height*width<<endl;
    }
    void perimeter()
    {
        cout<<2*(height+width)<<endl;
    }
    void diagonal()
    {
        cout<<sqrt(height*height+width*width)<<endl;
    }
};
int main()
{
    Rectangle r1;
    //r1.height=10;
    //r1.width=20;
    cin>>r1.height;
    cin>>r1.width;
    r1.area();
    r1.perimeter();
    r1.diagonal();
}
