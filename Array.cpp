#include<iostream>
using namespace std;
class product{
private:
    string productName;
    float price;
    int quantity;
public:
    product(string name,float p,int q)
    {
        productName=name;
        price=p;
        quantity=q;
    }
    void displayProductDetails()
    {
        cout<<"product:"<<productName<<endl<<"price:$"<<price<<endl<<"Quantity:"<<quantity<<endl<<endl<<endl;
    }
};
int main(){
    product shopGrid[2][2]={
    {
        product("Laptop",999.99,5),
        product("smartphone",699.99,10)
    },
    {
        product("Tablet",299.99,8),
        product("Headphone",49.99,15)
    }
};
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        shopGrid[i][j].displayProductDetails();
    }
 }
   return 0;
}
