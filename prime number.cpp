#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,prime=0;
    cout<<"enter any number=";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime++;
            break;
        }
    }
    if(prime==0)
    {
        cout<<"prime number.";
    }
    else
    {
        cout<<"composite number.";
    }
    getch();
}
