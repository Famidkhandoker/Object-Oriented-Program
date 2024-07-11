#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int height,width;
    public:
        Rectangle()
        {
            height=10;
            width=20;
        }
        void display()
        {
            cout<<height<<" "<<width<<endl;
        }


};
int main()
{
    Rectangle r1;
    r1.display();
}
