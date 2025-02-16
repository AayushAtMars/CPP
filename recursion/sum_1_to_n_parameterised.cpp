#include<iostream>
using namespace std;
void sum(int n,int s=0){
    if (n==0){
        cout<<s;
        return;
    }
    s=s+n;
    sum(n-1,s);
}
    int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    sum(n);
    return 0;
}