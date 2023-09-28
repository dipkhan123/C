#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter student's number=";
    cin>>n;
    float marks[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter number of student "<<i+1<<" :";
        cin>>marks[i];
    }
    float Max=marks[0];
    for(int i=1;i<n;i++)
    {
        if(Max<marks[i])
        {
            Max=marks[i];
        }
    }
    cout<<"Maximum number is : "<<Max<<endl;
    float Min=marks[0];
    for(int i=1;i<n;i++)
    {
        if(Min>marks[i])
        {
            Min=marks[i];
        }
    }
    cout<<"Minimum number is : "<<Min<<endl;
    for(int i=0;i<n;i++)
    {
        if(marks[i]>=80&&marks[i]<=100)
        {
            cout<<"A+"<<endl;
        }
        else if(marks[i]>=70&&marks[i]<80)
        {
            cout<<"A"<<endl;
        }
        else if(marks[i]>=60&&marks[i]<70)
        {
            cout<<"A-"<<endl;
        }
        else if(marks[i]>=50&&marks[i]<60)
        {
            cout<<"B"<<endl;
        }
        else if(marks[i]>=40&&marks[i]<50)
        {
            cout<<"C"<<endl;
        }
        else
        {
            cout<<"Fail."<<endl;
        }
    }
}
