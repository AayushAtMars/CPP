#include<iostream>
using namespace std;
    int main()
{
    int arr[]={10,1,2,5,3,12,4,8};
    int max=arr[0];
    for(int i=0;i<=(sizeof(arr)/sizeof(arr[0]));i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}