#include<iostream>
using namespace std;
    int main()
{
    int s;
    int arr[]={12,14,15,11,17,25,12,45,18,2,12};
    cout<<"enter the no to be searched: ";
    cin>>s;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if(arr[i]==s){
            cout<<i;
            break;
        }
        else cout<<-1; break;
    }
    return 0;
}