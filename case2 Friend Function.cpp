#include<bits/stdc++.h>
using namespace std;
class truck;//Forward Declaration
class bus {
int speed;

public:
    bus(int s):speed(s)
    {

    }
    friend void compare_speed(truck t,bus b);
    };
    class truck
    {
        int speed;
    public:
        truck(int s):speed(s)
        {

        }
        friend void compare_speed(truck t ,bus b);
    };
    void compare_speed(truck t,bus b)
    {
        if(t.speed>b.speed)
            cout<<"Truck Faster"<<endl;
        else if(t.speed==b.speed)
            cout<<"Equal speed"<<endl;
        else
            cout<<"Bus Faster"<<endl;
    }
int main()
{
    truck t(120);
    bus b(100);
    compare_speed(t,b);
    truck t2(100);
    bus b2(100);
    compare_speed(t2,b2);
}
