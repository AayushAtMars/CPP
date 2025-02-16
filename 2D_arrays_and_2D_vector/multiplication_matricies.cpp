#include<iostream>
using namespace std;
    int main()
{
    int r1,c1;
    cout<<("enter now of rows in matrix 1: ");
    cin>>r1;
    cout<<"enter no of columns in matrix 1: ";
    cin>>c1;
    int arr1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"enter element for row "<<i+1<<" column"<<j+1<<" ";
            cin>>arr1[i][j];
        }
    }


    int r2,c2;
    cout<<("enter now of rows in matrix 2: ");
    cin>>r2;
    cout<<"enter no of columns in matrix 2: ";
    cin>>c2;
    int arr2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"enter element for row "<<i+1<<" column"<<j+1<<" ";
            cin>>arr2[i][j];
        }
    }



    cout<<"MATRIX 1 IS: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"MATRIX 2 IS: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"MULTIPLIED MATRIX IS: "<<endl;;

    int arr_f[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value=0;
            for(int k=0;k<c1;k++){
                value+=arr1[i][k]*arr2[k][i];
            }
            arr_f[i][j]=value;
        }
    }



    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<arr_f[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}