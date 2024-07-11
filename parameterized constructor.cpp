#include<iostream>
using namespace std;
class Rectangle
{
private:
    int height,width;
public:
    Rectangle (int h,int w)
    {
        height=h;
        width=w;
    }
    void display()
    {
        cout<<height<<" "<<width<<endl;
    }
};
int main()
{
    Rectangle r1(10,20);
    r1.display();
}
