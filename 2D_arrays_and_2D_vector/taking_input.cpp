#include<iostream>
using namespace std;


    int main()
{
    int i,j;
    cout<<"enter row: ";
    cin>>i;
    cout<<"enter coulumn: ";
    cin>>j;

    int array[i][j];

    for(int ii=0;ii<i;ii++){
        for(int iii=0;iii<j;iii++){
            cout<<("enter element: ");
            cin>>array[ii][iii];
        }
    }


    for(int ii=0;ii<i;ii++){
        for(int iii=0;iii<j;iii++){
            cout<<array[ii][iii]<<" ";
        }cout<<endl;
    }
    return 0;
}