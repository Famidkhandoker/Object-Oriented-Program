#include<bits/stdc++.h>
using namespace std;
class myclass{
int x,y;
public:
    myclass(){}
    myclass(int x,int y){
    this->x=x;
    this->y=y;
    }
    int prod(){
    return this->x*this->y;
    }
     void set_x(int n,int z)
     {
         x=n;
         y=z;
     }
     ~myclass(){
     cout<<"Destructing.."<<x<<" "<<y<<endl;
     }
};
int main()
{
    myclass o1(1,2);
    myclass o2(3,4);

    cout<<o1.prod()<<endl;
    cout<<o2.prod()<<endl;

    myclass *p;
    p=new myclass[3];

    if(!p)
    {
        cout<<"Allocation Error"<<endl;
        return 1;
    }
    for(int i=0;i<3;i++)
        p[i].set_x(i,i);

    for(int i=0;i<3;i++)
        cout<<p[i].prod()<<endl;

    delete[] p;
    cout<<"Hello"<<endl;
}
