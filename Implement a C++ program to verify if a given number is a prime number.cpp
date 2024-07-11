#include<iostream>
using namespace std;
int main()
{
    int num;
    int i,count1=0;
    cout<<"Enter the number=";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count1++;
        }
    }
    if(count1==0)
    {
        cout<<"This number is prime"<<endl;
    }
    else
    {
        cout<<"This number is not prime"<<endl;
    }
    return 0;
}

