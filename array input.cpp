#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int score[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Player "<<i+1<<"=";
        cin>>score[i];
    }

    cout<<"result is:";
    for(int i=0;i<5;i++)
    {
        cout<<score[i]<<" ";
    }
    getch();

}
