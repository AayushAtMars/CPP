// GIVEN AN INTEGER ARRAY 'a', RETURN THE PREFIX SUM RUNNING
// SUM IN THE SAME ARRAY WITHOUT CREATING A NEW ARRAY

#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return;
}
    int main()
{
    int s;
    cout<<"enter the size of array: ";
    cin>>s;
    vector<int>v;
    for(int i=0;i<s;i++){
        int ele;
        cout<<"enter the elements: ";
        cin>>ele;
        v.push_back(ele);
    }

    prefixSum(v);

    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}