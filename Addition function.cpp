#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<sum<<endl;
}void add(int a,int b,int c)
{
    //int sum;
    //sum=a+b+c;
    //cout<<sum<<endl;
    cout<<a+b+c;
}
int main()
{
    add(10,20);
    add(10,20,30);
}
