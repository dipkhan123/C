#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter number=";
    cin>>num;
    if(num<0)
    {
        num= -num;

    }
    cout<<"The absolute value is "<<num;
    getch();
}
