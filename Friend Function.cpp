#include<bits/stdc++.h>
using namespace std;
class truck;

class bus{
int speed;

public:
    bus(int s):speed(s)
    {

    }
    void compare_speed(truck t);
};
class truck{
 int speed;
 public:
     truck(int s):speed(s)
     {

     }

friend void bus::compare_speed(truck t);
};
void bus::compare_speed(truck t)
{
    if(t.speed>speed)
    {
        cout<<"Truck Faster"<<endl;
    }
    else if(t.speed==speed)
    {
       cout<<"Equal speed"<<endl;
    }
    else
    {
        cout<<"Bus Faster"<<endl;
    }
}
void compare_speed()
{

}
int main()
{
  truck t(120);
  bus b (100);
  b.compare_speed(t);

  truck t2(100);
  bus b2(100);
  b2.compare_speed(t2);

}
