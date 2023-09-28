#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"number of students= ";
    cin>>n;
    int stu[n];
    for(int i=0;i<n;i++)
    {
        cout<<"marks of student "<<i+1<<"=";
        cin>>stu[i];
    }
    int max=stu[0];
    int min = stu[0];
    for (int i=1;i<n;i++)
    {
        if(max < stu[i])
        {
            max=stu[i];
        }
        if (min>stu[i])
        {
            min=stu[i];
        }

    }
    cout<<max<<endl<<min;
    getch();
}
