#include<iostream>
using namespace std;
int main()
{
    while(1){
          try{
                int num1,num2;
                cout<<"Enter 1st Number:\n";
                cin>>num1;
                cout<<"Enter 2nd Number:\n";
                cin>>num2;
                if(num2==0)
                {
                    throw -1;//error ashle catch er kase pathabe
                }
                double result=(double)num1/num2;
                cout<<"Result:"<<result<<endl;
            }
            catch(int x){
            cout<<"Divide by Zero is not possible"<<endl;
            cout<<"Please try again"<<endl;
            }

            }
            return 0;
}
