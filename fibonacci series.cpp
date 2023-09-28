#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,first=0,second=1,next;
    cout<<"enter numbers=";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    getch();
}
