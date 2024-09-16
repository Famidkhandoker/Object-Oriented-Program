#include<bits/stdc++.h>
using namespace std;
class samp
{
    private:
    int a;
    int b;
public:
    samp(int n,int m)
    {
        a=n;
        b=m;
    }
    void set_a(int n)
    {
        a=n;
    }
    void set_b(int m)
    {
        b=m;
    }
    int get_a()
    {
       return a;
    }
    int get_b()
    {
        return b;
    }
};
int main()
{
     samp ob[4] = {
        samp(0, 10),
        samp(1, 20),
        samp(2, 30),
        samp(3, 40)
    };


    for(int i = 0; i < 4; i++)
    {
        cout <<ob[i].get_a()<<" "<< ob[i].get_b() << endl;
    }

}
   /* samp ob[4][2]={
        samp(0,1),samp(2,3),samp(4,5),samp(6,7),
        samp(8,9),samp(10,11),samp(12,13),samp(14,15)_a()
    };
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<< ob[i][j].get_a()<<" "<<ob[i][j].get_b() <<endl;
        }
    }*/

