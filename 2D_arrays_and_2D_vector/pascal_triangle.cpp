//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1



#include<iostream>
using namespace std;

int func(int i){
    int n=1;
    if(i==0 ){
        return 1;
    }
    else{
        for(int k=i;k>0;k--){
            n=n*k;
        }
        return n;
    }
}
    int main()
{
    int r;
    cout<<"enter the value for r: ";
    cin>>r;

    for(int i=0;i<r;i++){
        for(int k=0;k<r-i;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<func(i)/(func(j)*func(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}