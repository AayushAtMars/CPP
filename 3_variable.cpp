#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main()
{
    int glo=9;
    glo=79;
    int a = 20,b=40;
    float c=6.9;
    char d='u';
    bool z=true;
   cout<<"the value of a is "<<a<<"\nthe value of b is "<<b<<"\nthe value of c is"<<c<<"\nthe value of d is "<<d<<endl;
   sum();
    cout<<"\nthe value of glo is "<<glo<<"\nbool is"<<z;
    return 0;
}