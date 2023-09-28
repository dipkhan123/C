#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[3];
    for(int i=0;i<3;i++)
    {
        cout<<"enter subject "<<i+1<<":";
        cin>>marks[i];
    }
    for(int j=0;j<3;j++)
    {
        if(marks[j]>=80&&marks[j]<=100)
        {
            cout<<"A+"<<endl;
        }
        else if(marks[j]>=70&&marks[j]<80)
        {
            cout<<"A"<<endl;
        }
        else if (marks[j]>=60&&marks[j]<70)
        {
            cout<<"A-"<<endl;
        }
        else if(marks[j]>=50&&marks[j]<60)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"Fail."<<endl;
        }
    }
    for (int i=0;i<3;i++)
    {
        if(marks[i]%2==0)
        {
            cout<<marks[i]<<"is an even number."<<endl;
        }
        else
        {
            cout<<marks[i]<<"is an odd number."<<endl;
        }
    }
    getch();
}
