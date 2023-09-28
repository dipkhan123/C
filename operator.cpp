#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num1,num2;
    char opt;
    cout<<"enter two numbers=";
    cin>>num1>>opt>>num2;
    if(opt=='+')
    {
        cout<<num1+num2;
    }
    else if(opt=='-')
    {cout<<num1-num2;}

    else if(opt =='*')
    {
        cout<<num1*num2;
    }
    else if(opt=='/')
    {
        cout<<num1/num2;
    }
    else
    {
        cout<<" Invalid operator.";
    }
    getch();
}
