#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cout<<"enter the elements: ";
        cin>>v[i];
    }
    int s;
    cout<<"which element u want to search: ";
    cin>>s;

    int search=0;
    // for(int j=0;j<v.size();j++){
    //     if(v[j]==s){
    //         search=j;
    //     }
    //}

    for(int j=v.size()-1;j>=0;j--){
        if(v[j]==s){
            search=j;
            break;
        }
    }

    if(search==0){
        cout<<"not found";
    }
    else cout<<search;
    return 0;
}