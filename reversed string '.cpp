#include<iostream>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    cout<<"enter a string : ";
    cin>>str1;
    cout<<"Inputted string : "<<str1<<endl;
    int len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    cout<<"Reversed string : ";
        for(int j=0,i=len-1;i>=0;i--,j++)
        {
            str2[j]=str1[i];
            cout<<str2[j];
        }
        cout<<endl;
        int pal=0;
        for(int i=0;str1[i]!='\0';i++)
        {
            if(str1[i]!=str2[i])
            {
                pal=1;
            }
        }
        if(pal==1)
        {
            cout<<"string is not palindrome.";
        }
        else
        {
            cout<<"string is palindrome.";
        }
}
