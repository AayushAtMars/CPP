#include<iostream>
#include<vector>
using namespace std;
    int main()
{
    vector<int>v;

    for(int i=0;i<5;i++){
        int element;
        cout<<("enter element: ");
        cin>>element;
        v.push_back(element);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}