#include<iostream>
using namespace std;
int main()
{
    char str1[10];
    char str2[10];
    cout<<"enter a string : ";
    cin>>str1;
    cout<<"your inputted string is : "<<str1<<endl;
        int len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    cout<<"length of the string is : "<<len<<endl;
    cout<<"reversed string is : ";
    for(int j=0, i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];
        cout<<str2[j];
    }
    cout<<endl;
    int flag=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"string is not palindrome.";
    }
    else
    {
        cout<<"string is palindrome.";
    }
}
