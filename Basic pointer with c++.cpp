#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=5;
    cout<<x<<endl;//5
    cout<<&x<<endl;//0x61fe14
    int &refer=x;
    cout<<&refer<<endl;//0x61fe14
    cout<<refer<<endl;//5


    int refer2=x;
    cout<<&refer2<<endl;//0x61fe14
    cout<<refer2<<endl;//5
    refer2++;
    refer--;
    cout<<refer2<<endl;//6
    cout<<x<<endl;//4

    int *ptr;
    ptr=&x;
    cout<<ptr<<endl;//0x61fe0c
    cout<<*ptr<<endl;//4



}
