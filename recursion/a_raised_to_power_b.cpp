#include<iostream>
using namespace std;
int expt(int a,int b){
    if(b==0){
        return 1;
    }
    return a*expt(a,b-1);

}
    int main()
{
    int a,b;
    cout<<"enter the no: ";
    cin>>a;
    cout<<"enter power: ";
    cin>>b;
    cout<<expt(a,b);
    return 0;
}