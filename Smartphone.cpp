#include<iostream>
using namespace std;
class smartphone{
public:
    smartphone(){
    cout<<"Default Constructor :A new smartphone is being initialized."<<endl;
    }
    smartphone(string brand ,double price){
    cout<<"Parameterized Constructor:"<<brand<<"priced at $"<<price<<"is being initialized."<<endl;
    }
    ~smartphone(){
    cout<<"Destructor:The smartphone is being destroyed."<<endl;
    }
    void call(string number){
    cout<<"calling "<<number<<"from the smartphone"<<endl;
    }
};
int main(){
smartphone s1;
smartphone s2("iphone",999.99);
s2.call("123-456-7890");
s1.call("987-654-3210");
return 0;
}
