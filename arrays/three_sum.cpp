#include<iostream>
using namespace std;
    int main()
{
    int arr[]={3,1,2,4,0,6};
    int sum=0;
    int targetsum=5;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]));j++){
            for(int k=j+1;k<(sizeof(arr)/sizeof(arr[0]));k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                    sum++;
                }
            }
        }
    }
    cout<<sum;
    return 0;
}