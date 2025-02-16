#include<iostream>
int c=69;
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    cout<<"the sum of a+b is:"<<a+b<<endl;
    cout<<"the value of global c variable is:"<<::c;
    return 0;
}