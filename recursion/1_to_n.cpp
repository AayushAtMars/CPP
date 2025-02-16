#include<iostream>
using namespace std;
void recur(int x,int n){
    if(x>n){
        return;
    }
    cout<<x<<" ";
    recur(x+1,n);
}
    int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    recur(1,n);
    return 0;
}