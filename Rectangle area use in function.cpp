#include<iostream>
#include<math.h>
using namespace std;
void area(int h,int w)
{
    cout<<h*w<<endl;
}
void perimeter(int h,int w)
{
    cout<<2*(h+w)<<endl;
}
void diagonal(int h,int w)
{
    cout<<sqrt(h*h+w*w)<<endl;
}
int main()
{
    area(10,20);
    perimeter(10,20);
    diagonal(10,20);
}
