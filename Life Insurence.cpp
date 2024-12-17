#include<iostream>
using namespace std;
class lifeinsurance;
class insurance{
private:
int nidnumber;
protected:
    int phonenumber;
public:
    string name;
    void setdata(){
    cout<<"Nid Number :"<<endl;
    cin>>nidnumber;
    cout<<"Phone Number:"<<endl;
    cin>>phonenumber;
    cout<<"Name:"<<endl;
    cin>>name;
    }
    void getdata(){
    cout<<"Nid Number :"<<nidnumber<<endl;
    cout<<"Phone Number:"<<phonenumber<<endl;
    cout<<"Name:"<<name<<endl;
    }
    friend class lifeinsurance;
};
class lifeinsurance:public insurance{};
int main(){
lifeinsurance i1;
i1.setdata();
i1.getdata();
return 0;
}
