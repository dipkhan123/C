#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter any year=";
    cin>>num;
    if(num%4==0&&num%100!=0)
    {
        cout<<"leap year.";
    }
    else if(num%400==0)
    {
        cout<<"leap year.";
    }
    else
    {
        cout<<"not a leap year.";
    }
    getch();
}
