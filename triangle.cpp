#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number of lines=";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<" "<<(char)(row+64);
        }
        cout<<endl;
    }
    getch();
}
