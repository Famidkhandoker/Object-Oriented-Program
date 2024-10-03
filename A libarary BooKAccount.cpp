#include<iostream>
using namespace std;
class BookAccount
{
private:
    double fine;
public:
    string bookId;
    string borrowerName;


    BookAccount()
    {
        cout<<"Enter Book ID:"<<endl;
        cin>>bookId;
        cout<<"Enter Borrower name:"<<endl;
        cin>>borrowerName;
    }
    void calculatefine(int overdueDays)
    {
        double f;
        f=overdueDays*.50;
        fine=f;
    }
    int calculateoverduedays(int borrowdate,int currentdate)
    {
        if(currentdate>borrowdate)
        {
            return (currentdate-borrowdate)/1000*365+//years
            ((currentdate/100)%100-(borrowdate/100)%100)*30+//months
            (currentdate%100-borrowdate%100);//days
        }
    }
    ~BookAccount()
    {
        cout<<endl<<"Book name:"<<bookIdn<<endl<<"Borrower Name:";
        cout<<borrowerName<<endl;
        cout<<"Fine is :$"<<fine<<endl<<endl;
        cout<<"This Account Now Close";
    }
};

int main()
{
    int borrow,current,c;
    BookAccount b;
    cout<<"Borrow Date:" ;
    cin>>borrow;
    cout<<"Enter Current Date:";
    cin>>current;
    c=b.calculateoverduedays(borrow,current);//catch days
    b.calculatefine(c);

}

