#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum;
    cout<<"enter the last number=";
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    cout<<sum;
    getch();
}
