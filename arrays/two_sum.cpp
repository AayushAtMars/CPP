// #include<iostream>
// using namespace std;
//     int main()
// {
//     int arr[]={1,3,4,6,7,1};
//     int sum=0;
//     int targetsum=5;
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//         for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]));j++){
//             if(arr[i]+arr[j]==targetsum){
//                 sum++;
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int num[]={2,7,11,15};
    int target=9;
    for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
        for(int j=0;j<sizeof(num)/sizeof(num[0]);j++){
            if(num[i]+num[j]==target){
                cout<<i,j;
                break;
            }
        }
    }
    return 0;
}