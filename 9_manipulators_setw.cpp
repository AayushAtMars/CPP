#include<iostream>
#include<iomanip>
using namespace std;
    int main()
{
    int a=69,b=699,c=6969;
    cout<<"the value without setw is: "<<a<<endl;    
    cout<<"the value without setw is: "<<b<<endl;    
    cout<<"the value without setw is: "<<c<<endl<<endl; 


    cout<<"the value with setw is: "<<setw(4)<<a<<endl;    
    cout<<"the value with setw is: "<<setw(4)<<b<<endl;    
    cout<<"the value with setw is: "<<setw(4)<<c<<endl;    
    return 0;
}