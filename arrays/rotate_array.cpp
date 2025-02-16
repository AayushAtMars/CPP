// ROTATE THE GIVEN ARRAY 'a' BY K STEPS, WHERE K IS NON-NEGATIVE 
// NOTE- K CAN BE GREATER THAN N AS WELL WHERE N IS THE SIZE OF ARRAY 'a'.

#include<iostream>
using namespace std;
    int main()
{
    int arr[]={1,2,3,4,5};
    int no_of_rotation=2;
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=no_of_rotation%size;
    int arr1[size];

    for(int i=0;i<k;i++){
        arr1[i]=arr[(size-1-i)];
    }

    int l=0;
    for(int j=k;j<size;j++){
        arr1[j]=arr[l++];
    }


    for(int i=0;i<size;i++)
    cout<<arr1[i]<<" ";
    return 0;
}