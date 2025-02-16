#include<iostream>
int swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
using namespace std;
    int main()
{
    int a=5,b=10;
    cout<<"before swapping the value of of a is "<<a<<" and b is "<<b<<endl;
    swap(a,b); 
    cout<<"before swapping the value of of a is "<<a<<" and b is "<<b;
    return 0;
}