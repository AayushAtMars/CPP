#include<iostream>
using namespace std;
int main()
{
    int a=69;
    float b=69.9;
    cout<<"The value of a after typecasting is "<<float(a)<<endl;
    cout<<"The value of a after typecasting is "<<(float)a<<endl;

    cout<<"The value of b after typecasting is "<<int(b)<<endl;
    cout<<"The value of b after typecasting is "<<(int)b<<endl;


    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;
    return 0;
}