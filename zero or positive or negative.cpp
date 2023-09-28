#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number=";
    cin>>num;
    if(num>0)
    {
        cout<<"positive number.";
    }
    else if(num<0)
    {
        cout<<"negative number.";
    }
    else
    {
        cout<<"Zero.";
    }
    getch();
}
