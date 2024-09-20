#include<iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int pages;
public:
    void assignBook(string t,string a,int p)
    {
        title=t;
        author=a;
        pages=p;
    }
    void displayBook()
    {
        cout<<"Title:"<<title<<endl<<"Author:"<<author<<endl<<"Pages:"<<pages<<endl<<endl;
    }
    friend Book*compareBooks(Book*b1,Book*b2)
    {
        if(b1->pages>b2->pages)
        {
            return b1;
        }
        else
        {
            return b2;
        }
    }
};
int main()
{
    Book book1,book2;
    book1.assignBook("Higher Math","Famid Khandoker",200);
    book2.assignBook("physics","Famid Khandoker",150);
    cout<<"Book 1 Details:"<<endl;
    book1.displayBook();
    cout<<"Book 2 Details:"<<endl;
    book2.displayBook();
    Book*largerBook=compareBooks(&book1,&book2);
    cout<<"The book with more pages is:"<<endl;
    largerBook->displayBook();
    return 0;
}
