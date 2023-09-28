#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char arr[13]={'a','b','c','d','e','f','g','h','i','j','k','l','m'};
    int row,col;
    for(row=1;row<=7;row++)
    {
        for(col=1;col<=7-row;col++)
        {
            cout<<"  ";
        }
        for(col=0;col<2*row-1;col++)
        {
            cout<<" "<<arr[col];
        }
        cout<<endl;
    }
    getch();
}
