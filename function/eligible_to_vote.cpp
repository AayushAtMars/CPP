#include<iostream>
bool check(int age){
    if(age>=18){
        return true;
    }
    if(age<18){
        return false;
    }
}
using namespace std;
    int main()
{
    int age;
    cout<<"enter the age: ";
    cin>>age;
    if(check(age)){
        cout<<"eligible to vote"<<endl;
    }
    else{
        cout<<"not eligible to vote";
    }
    return 0;
}