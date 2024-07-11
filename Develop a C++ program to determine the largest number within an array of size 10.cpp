#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the array size =";
    int i,max=0;
    for(i=0;i<=10;i++)
    {
        cout<<"Enter the number";
        cin>>arr[i];
    }
    for(i=0;i<=10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The largest number is="<<max<<endl;
}
