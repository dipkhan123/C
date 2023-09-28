#include<iostream>
using namespace std;
void sum(int a, int b)
{   int result=a+b;
    cout<<"SUM is : "<<result<<endl;
}
void sub(int a , int b)
{
    int result=a-b;
    cout<<"SUB is : "<<result<<endl;
}
void mult(int a ,int b)
{
    int result=a*b;
    cout<<"Multiplication is : "<<result<<endl;
}
 void div(int a, int b)
{
    float result = a/b;
    cout<<"Division is : "<<result;

}
int main()
{
        sum(20,10);
        sub(15,10);
        mult(10,10);
        div(25,5);
}
