#include<iostream>
#include<string>
using namespace std;
class student{
private:
    string name;
    int studentId;
    float marks[3];
public:
    void set_inputDetails()
    {
        cout<<"Enter student name:"<<endl;
        cin>>name;
        cout<<"Enter student Id:"<<endl;
        cin>>studentId;
    }
    void set_inputMarks()
    {
        cout<<"Enter marks for 3 subject:"<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }

    }
    float average()
    {
        float sum=0,avg;
        for(int i=0;i<3;i++)
        {
            sum=sum+marks[i];
        }
        avg=sum/3;
        return avg;
    }
    float total()
    {
        float total=0;
        for(int i=0;i<3;i++)
        {
            total=total+marks[i];
        }
        return total;
    }
};
int main()
{
    student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].set_inputDetails();
        s[i].set_inputMarks();
        cout<<i+1<<"."<<"student Average marks is:"<<s[i].average()<<endl;
        cout<<i+1<<"."<<"student total marks is:"<<s[i].total()<<endl;
}
}
