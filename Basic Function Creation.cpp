#include<iostream>
using namespace std;
void greet()
{
    cout<<"Hello World"<<endl;
}
 int add(int a ,int b)
{
    int sum;
    sum=a+b;
    return sum;

}
int main()
{
    greet();
    cout<<add(10,20)<<endl;
}
