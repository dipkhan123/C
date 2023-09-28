#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"enter any year=";
    cin>>year;
    (year%4==0&&year%100!=0||year%400==0)?cout<<"leap year.":cout<<"not a leap year.";
    getch();
}
