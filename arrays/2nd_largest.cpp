//FIND 2ND LARGEST NUMBER IN THE GIVEN ARRAY

#include<iostream>
using namespace std;
    int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int max=arr[0];
    int max_index;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
    }
    arr[max_index]=0;
    int maxf=arr[0];
    for(int j=0;j<(sizeof(arr)/sizeof(arr[0]));j++){
        if(arr[j]>maxf){
            maxf=arr[j];
        }
    }
    cout<<maxf;
    return 0;
}



//or for 2nd max if(arr[i]>second_max && a[i]!=max) second_max=arr[i]