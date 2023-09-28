#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter number of students=";
    cin>> n;
    int stu[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Marks of student "<< i+1 <<"=";
        cin>>stu[i];
        sum=sum+stu[i];
    }
    cout<<"Total marks :"<<sum<<endl;
    cout<<"Average marks :"<<(float)sum/n<<endl;
    int max=stu[0];
    int min=stu[0];
    for(int i=1;i<n;i++)
    {
        if(max < stu[i])
        {
            max=stu[i];
        }
        if(min>stu[i])
        {
            min=stu[i];
        }

    }
    cout<<"maximum number = "<<max<<endl;
    cout<<"minimum number = "<< min;

    getch();

}
