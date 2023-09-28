#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter numbers =";
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1<num3)
    {
        cout<<"second largest is : "<<num1;
    }
    else if(num2>num1&&num2<num3)
    {
        cout<<"second largest is : "<<num2;
    }
    else
    {
        cout<<"second largest is : "<<num3;
    }
}
