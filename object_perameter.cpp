#include<iostream>
using namespace std;
class car{
string model;
int year;
public:
    //Default Constructor
    car()
    {
        model="Unknown Model";
        year=0;
    }
    //parameter constructor
    car(string m,int y)
    {
        model=m;
        year=y;
    }
    //copy constructor
    car(const car &c)
    {
        model=c.model;
        year=c.year;
    }
    //setter and getter methods
    void setModel(string m)
    {
        model=m;
    }
    string getModel()
    {
        return model;
    }
    void setYear(int y)
    {
        year=y;
    }
    int getYear()
    {
        return year;
    }
    //Method to display car info
    void displayInfo()
    {
        cout<<"car Model: "<<model<< " " <<"Year: "<<year<<endl;
    }
};
//Function that createCar returns in car object
car createCar(string model,int year)
{
    car newcar(model,year);//create a car object using parameter
    return newcar;
}

int main()
{
    car car1=createCar("Mercedes-Benz",2023);
    car1.displayInfo();//car Model:Mercedes-Benz Year:2023

    car*ptr=&car1;
    ptr->displayInfo();//car Model:Mercedes-Benz Year:2023

    car *ptr2=new car(car1);
    ptr2->displayInfo();//car Model:Mercedes-Benz Year:2023

    car *ptr3=ptr;
    ptr3->displayInfo();//car Model:Mercedes-Benz Year:2023

    car *ptr4=new car("Tenda",2000);
    ptr4->displayInfo();//car Model: Tenda Year: 2000

    cout<<&car1<<endl;//0x61fda0
    cout<<ptr<<endl;//0x61fda0
    cout<<ptr2<<endl;//0x141750
    cout<<ptr3<<endl;//0x61fda0
    cout<<ptr4<<endl;//0x1c18d0


    return 0;

}

