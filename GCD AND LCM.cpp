#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    cout<<"enter numbers=";
    cin>>num1>>num2;
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    cout<<"GCD is:"<<gcd<<endl<<"LCM is:"<<lcm;
    getch();
}
