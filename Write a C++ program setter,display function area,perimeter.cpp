#include<iostream>
using namespace std;
class shape
{
    private:
    double side1;
    double side2;
    public:
        void setter(double h,double w)
        {
            side1=h;
            side2=w;
        }
        void display()
        {
            cout<<side1<<" "<<side2<<endl;
        }
        void area()
        {
            cout<<"Area=";
            cout<<2*((side1+side2)/2)<<endl;
        }
        void perimeter()
        {
            cout<<"perimter=";
            cout<<2*side1+2*side2<<endl;
        }

};
int main()
{
    shape r1,r2;
    //int s1,s2,s3,s4;
    cout<<"Enter the first two number="<<endl;
    //user defined
     //cin>>s1>>s2;
    //r1.setter(s1,s2);
    r1.setter(10,20);
    r1.display();
    r1.area();
    r1.perimeter();
    //cout<<"Enter the second two number="<<endl;
    //cin>>s3>>s4;
    r2.setter(30,40);
    //r2.setter(s3,s4);
    r2.display();
    r2.area();
    r2.perimeter();
    return 0;
}

