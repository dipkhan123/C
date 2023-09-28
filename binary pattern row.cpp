#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"enter the number of lines=";
    cin>>n;
    for(int row=1;row<=4;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<row%2;
        }
        cout<<endl;
    }
    getch();
}
