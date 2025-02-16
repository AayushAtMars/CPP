//FIND THE UNIQUE NUMBER IN A GIVEN ARRAY WHERE ALL THE -
// - ELEMENTS ARE BEING REPEATED TWICE WITH ONE VALUE BEING UNIQUE

#include<iostream>
using namespace std;
    int main()
{
    int arr[]={2,3,1,3,2,4,1};
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]));j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }
        }
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}