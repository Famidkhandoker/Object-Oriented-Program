#include<iostream>
using namespace std;
int add (int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    return sum;
}
int main()
{
    int result;
    result= add(10,20,30);
    cout<<result<<endl;
}
