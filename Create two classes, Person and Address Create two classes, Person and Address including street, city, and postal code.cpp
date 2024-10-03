#include <iostream>
#include <string>
using namespace std;
class address;
class person
{
string name;
int age;
public:
person(string a, int b)
{
name = a;
age = b;
}
friend void displaydetails(person p1, address a1);
};
class address
{
string street;
string city;
string postalcode;
public:
address(string a, string b, string c)
{
street = a;
city = b;
postalcode = c;
}
friend void displaydetails(person p1, address a1);
};
void displaydetails(person p1, address a1)
{
cout<<endl;
cout<<"Display the details"<<endl;
cout<<"Name : " << p1.name << endl;
cout<<"Age : " << p1.age << endl;
cout<<"Address : " << a1.street;
cout<<", " << a1.city << ", " << a1.postalcode << endl;
}
int main()
{
person p1("Akash",22);
address a1("Wasa Road", "Dhaka", "1216");
displaydetails(p1,a1);
}
