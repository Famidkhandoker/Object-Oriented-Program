#include<iostream>
using namespace std;
class Square;
class Rectangle
{
int length;
int width;
public:
int get_l() const { return length; }
void set1()
{
cout<<"Enter Rectangle Length :"<< endl;
cin>> length;
cout<<"Enter Rectangle Width :"<<endl;
cin >> width;
}
friend void area (Rectangle r1, Square s1);
friend void increaseArea (Rectangle r1);
};
class Square
{
int side;
public:
//to get side
int get_s() const { return side; }
void set1()
{
cout<<"Enter Square side :"<< endl;
cin>> side;
}
friend void area (Rectangle r1, Square s1);
void increaseArea(Rectangle r1)
{
side+=r1.get_l();
}
};
void area (const Rectangle r1, const Square s1)
{
int ar1,ar2;
ar1 = (r1.length * r1.width);
cout<<"\tRectangle Area is\t\t: "<<ar1<<endl;
ar2 = (s1.side * s1.side);
cout<<"\tSqure Area is\t\t\t: "<<ar2<<endl;
}
int main()
{
Rectangle re1;
Square se1;
re1.set1();
se1.set1();
area(re1,se1);
se1.increaseArea(re1);
cout <<"\tUpdated value \t\t\t: "<< se1.get_s() << endl<<endl;
area(re1,se1);
}

