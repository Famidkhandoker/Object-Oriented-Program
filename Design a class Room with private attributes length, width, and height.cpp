#include<iostream>
using namespace std;
class room
{
int length, width, height;
public:
room(int l, int w, int h)
{
length = l;
width = w;
height = h;
}
void set_value()
{
cout<<"Enter length: " << endl;
cin >> length;
cout<<"Enter Width: " << endl;
cin >> width;
cout<<"Enter Height: " << endl;
cin >> height;
}
void set_value(int a, int b, int c)
{
length = a;
width = b;
height = c;
}
void get_value()
{
cout<<"length: " << length<< endl;
cout<<"Width: " << width<< endl;
cout<<"Height: " << height<< endl;
}
void area()
{
int ar;
ar = length * width;
cout << "Area is : " << ar << endl;
}
friend int calculate (room r6, room r7);
};
int calculate (room r6, room r7)
{
int c,d;
c = (r6.length * r6.width);
d = (r7.length * r7.width);
if(c>d)
{
cout<<"r6 is big" << endl;
return c;
}
else
{
cout<<"r7 is big" << endl;
return d;
}
}
int main()
{
//point 01
room r1(10,20,30);
cout <<"First object by constractor :" <<endl;
r1.get_value(); // create a object by constractor+
cout<<endl;
// point 02
cout <<"Creating a object pointer :" <<endl;
room *r2 = &r1 ;
r2->get_value();// object pointer
cout << endl;
// point 03
cout <<"Creating a pointer :" <<endl;
room *r3;
r3->set_value(); // crate object pointer by user
r3->get_value(); //values
cout << endl;
// point 04
cout <<"Creating a pointer :" <<endl;
room *r4;
r3->set_value(50,60,70); // crate object pointer by peremeter
r3->get_value();
cout << endl;
// point 05
r1.area();
cout << endl;
// point 06
room r6(30,10,20),r7(15,25,35);
cout << calculate(r6,r7);
cout << endl;
}
