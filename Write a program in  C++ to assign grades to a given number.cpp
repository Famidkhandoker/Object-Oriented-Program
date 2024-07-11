#include<iostream >
#include<conio.h>
using namespace std;
int main()
{
    int grade;
    cout<<"Enter your number=";
    cin>>grade;
    if(grade>=0&&grade<=59)
    {
        cout<<"F"<<endl;
    }
    else if(grade>=60&&grade<=69)
    {
        cout<<"D"<<endl;
    }
     else if(grade>=70&&grade<=79)
    {
        cout<<"C"<<endl;
    }
     else if(grade>=80&&grade<=89)
    {
        cout<<"B"<<endl;
    }
     else if(grade>=90&&grade<=100)
    {
        cout<<"A"<<endl;
    }
    getch();
}

