#include<bits/stdc++.h>
using namespace std;
class date{
int day,mon,yr;
public:
    date(char*str)
    {
        sscanf(str,"%d%*c%d%*c%d",&day,&mon,&yr);

    }
    date(int d,int m,int y){
    day=d;
    mon=m;
    yr=y;
    }
    void print(){
    cout<<day<<"."<<mon<<"."<<yr<<endl;
    }
};
int main()
{
    date d1(30,10,2024);
    date d2("25/11/2024");
    d1.print();//30.10.2024
    d2.print();//25.11.2024
}
