#include<iostream>
#include<vector>
using namespace std;
    int main()
{
    vector<int>v(10);
    for(int i=0;i<10;i++){
        cout<<"enter the elements: ";
        cin>>v[i];
    }
    int n;
    cout<<"which element u want to count: ";
    cin>>n;

    int count=0;
    for(int j=0;j<v.size();j++){
        //if(n==v[j]){
            if(v[j]>=n){
            count++;
        }
    }
    cout<<count;
    return 0;
}