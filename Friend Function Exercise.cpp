#include<iostream>
#include<string>
using namespace std;
class box
{
private:
    float length;
    float width;
    float height;
public:
    void set_value()
    {
        cin>>length>>width>>height;
    }
friend void volume(box b1, box b2);
};
void volume(box b1, box b2)
{
    float volume1, volume2;
    volume1=b1.length*b1.width*b1.height;
     volume2=b2.length*b2.width*b2.height;
     if(volume1 > volume2)
     {
         cout<<"Box 1 is big" <<endl;
     }
     else
     {
         cout<<"Box 2 is big"<<endl;
     }
}
int main()
{
    box b1,b2;
    b1.set_value();
    b2.set_value();
    volume(b1,b2);
}


