#include<iostream>
using namespace std;
    int main()
{
    int sum=0;
    int arr[]={1,2,1,2,1,2};
    for(int i=0;i<6;i++){
        if(i%2==0){
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
    }
    cout<<sum;
    return 0;
}