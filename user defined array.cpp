#include<iostream>
using namespace std;
class product
{
    float price;
    int quantity;
    string productName;
public:
    void product1()
    {
        cout<<"Enter product name"<<endl;
        cin>>productName;
        cout<<"Enter price"<<endl;
        cin>>price;
        cout<<"Enter quantity"<<endl;
        cin>>quantity;
    }
    void show()
    {
        cout<<"Product:"<<productName<<endl<<"price:$"<<price<<endl;
        cout<<"quantity:"<<quantity<<endl;
    }
};
int main()
{
    product pro[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
            for(j=0;j<2;j++)
            {
                pro[i][j].product1();
            }
    }
      for(i=0;i<2;i++)
    {
            for(j=0;j<2;j++)
            {
                pro[i][j].show();
            }
    }
}

