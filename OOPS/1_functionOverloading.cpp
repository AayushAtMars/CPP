#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}

int main()
{
    cout<<add(1,2)<<endl;
    cout<<add(1.111f,2.222f)<<endl;
    cout<<add(1,2,3)<<endl;
    return 0;
}