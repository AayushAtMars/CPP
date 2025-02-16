#include<iostream>
#include<vector>
using namespace std;
int twosum(vector<int> &v, int target){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(v[i]+v[j]==target){
                //return(i,j);
                cout<<i<<endl;
                cout<<j<<endl;
            }
            break;
        }
    }
}
int main()  
{
    vector<int>v = {3,2,4};
    int target = 6;
    twosum(v,target);
    return 0;
}