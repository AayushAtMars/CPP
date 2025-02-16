#include<iostream>
using namespace std;
bool isodd(int a){
    if(a%2!=0){
        return true;
    }
    else{
        false;
    }
}
    int main()
{
    int s,e;
    cout<<"enter starting limit: ";
    cin>>s;
    cout<<"enter ending limit: ";
    cin>>e;
    for(int i=s;i<=e;i++){
        if(isodd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}