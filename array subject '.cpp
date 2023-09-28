#include<iostream>
using namespace std;
int main()
{
    float arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter number of subject "<<i+1<<":";
        cin>>arr[i];
    }
    float Max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(Max<arr[i])
        {
            Max=arr[i];
        }
    }
    cout<<"Maximum number :"<<Max<<endl;
    float Min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(Min>arr[i])
        {
            Min=arr[i];
        }
    }
    cout<<"Minimum number :"<<Min<<endl;
    float sum=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=80&&arr[i]<=100)
        {
            cout<<"Letter grade of subject "<<i+1<<" is A+"<<endl;
        }
        else if(arr[i]>=70&&arr[i]<80)
        {
            cout<<"Letter grade of subject "<<i+1<<" is A"<<endl;
        }
        else if(arr[i]>=60&&arr[i]<70)
        {
            cout<<"Letter grade of subject "<<i+1<<" is A-"<<endl;
        }
        else
        {
            cout<<"Letter grade of subject "<<i+1<<" is Fail."<<endl;
        }
        sum=sum+arr[i];
    }
    cout<<"Total number is : "<<sum<<endl;
    float avg=sum/5;
    cout<<"Average number is : "<<avg<<endl;


}
