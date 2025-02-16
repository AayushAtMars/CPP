#include<iostream>
using namespace std;
int main()
{
int a=10,b=9;
//arthemetic operators
cout<<"the value of a+b is"<<a+b<<endl;
cout<<"the value of a-b is"<<a-b<<endl;
cout<<"the value of a*b is"<<a*b<<endl;
cout<<"the value of a/b is"<<a/b<<endl;
cout<<"the value of a%b is"<<a%b<<endl;
cout<<"the value of a++ is"<<a++<<endl;
cout<<"the value of a-- is"<<a--<<endl;
cout<<"the value of ++a is"<<++a<<endl;
cout<<"the value of --a is"<<--a<<endl;
//comparison operators
cout<<"the value of a==b is"<<(a==b)<<endl;
cout<<"the value of a!=b is"<<(a!=b)<<endl;
cout<<"the value of a> bis"<<(a>b)<<endl;
cout<<"the value of a< bis"<<(a<b)<<endl;
cout<<"the value of a>=b is"<<(a>=b)<<endl;
cout<<"the value of a<=b is"<<(a<=b)<<endl;
//logical operators
cout<<"the value of a==b and a>b is"<<((a==b)&&(a>b))<<endl;
cout<<"the value of a==b or a>b is"<<((a==b)||(a>b))<<endl;
cout<<"the value of not a!=b is"<<(!(a>b))<<endl;
}