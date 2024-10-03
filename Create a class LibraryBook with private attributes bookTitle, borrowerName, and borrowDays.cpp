#include<iostream>
using namespace std;
class librarybook
{
string booktitle;
string borrowername;
int borrowdays;
public:
void set_value()
{
cout<<"Enter Book Title: " << endl;
cin >> booktitle;
cout<<"Enter Borrower Name: " << endl;
cin >> borrowername;
cout<<"Enter Borrow Days: " << endl;
cin >> borrowdays;
cout<<endl;
}
void get_value()
{
cout<<endl<<"Book Title is: "<<booktitle<<endl;
cout<<"Borrower Name: "<< borrowername<< endl;
cout<<"Borrow Days: "<< borrowdays<< endl<<endl;
}
};
int main()
{
int count=0;
// 1st point
librarybook b[20];
int i;
for(i=0;i<5;i++)
{
cout << i+1 << " List is" << endl;
b[i].set_value();
count++;
}
cout<<endl;
for(i=0;i<5;i++)
{
cout<<endl;
cout << i+1 << " List is" << endl;
b[i].get_value();
}
cout<< endl<<endl;
// 2nd point
librarybook b1[2][2];
for(int i=0;i<2;i++)
{
cout << endl << i+1 <<" Row is Start "<<endl;
for(int j=0; j<2; j++)
{
cout<< j+1 << " Coloum is Start" << endl;
b1[i][j].set_value();
count++;
}
}
cout<<" Now Get the array Values " << endl;
for(int i=0;i<2;i++)
{
cout << endl << i+1 <<" Row is Start "<<endl;
for(int j=0; j<2; j++)
{
cout<< j+1 << " Coloum is Start" << endl;
b1[i][j].get_value();
}
}
cout<< endl<<endl;
}
