#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    char row,col;
    cout<<"enter the number of lines=";
    cin>>n;
    for( row=1;row<=n;row++)
    {
        for( col=1;col<=row;col++)
        {
            cout<<" "<<(char)(col+64);
        }
        cout<<endl;
    }
    getch();
}
