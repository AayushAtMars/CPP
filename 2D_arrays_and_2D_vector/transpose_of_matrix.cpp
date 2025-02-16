#include<iostream>
using namespace std;
    int main()
{
    int r1,c1;
    cout<<"enter the value of r1: ";
    cin>>r1;
    cout<<"enter the value of c1: ";
    cin>>c1;

    int arr[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"enter the value for "<<i+1<<" "<<j+1<<": ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<"ORIGINAL MATRIX IS: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int arr_r[c1][r1];
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            arr_r[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    cout<<"TRANSPOSE MATRIX IS: ";
    cout<<endl;

    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<arr_r[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}