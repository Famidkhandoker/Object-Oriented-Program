#include <iostream>
#include <string>
using namespace std;
class Book {
private:
string title;
string author;
int page;
public:
void assignbook()
{
cout<<"Enter Book Title:"<<endl;
cin>>title;
cout<<"Enter Book Author:"<<endl;
cin>>author;
cout<<"Enter Book Page:"<<endl;
cin>>page;
}
friend Book *compareBook (Book *b1, Book *b2);
void displaybook()
{
cout <<"\tBook name\t: \t"<<title<<endl;
cout <<"\tBook Author\t: \t"<<author<<endl;
cout <<"\tBook Page\t: \t"<<page<<endl<<endl;
}
};
Book *compareBook(Book *b1, Book *b2)
{
cout<<"\t\tThe More page Book is :"<<endl<<endl;
if(b1 -> page > b2 -> page)
{
return b1;
}
else
{
return b2;
}
}
int main()
{
Book b1,b2;
b1.assignbook();
b2.assignbook();
b1.displaybook();
b2.displaybook();
Book *out = compareBook(&b1,&b2);
out->displaybook();
}

