// GIVEN AN ARRAY OF INTEGERS OF SIZE N. ANSWER Q QUERIES WHERE YOU NEED TO PRINT THE SUM OF VALUES IN A GIVEN
// RABGE OF INDICES FOR L TO R(BOTH INCLUDED).
// NOTE: THE VALUES OF L AND R IN QUERIES FLLOW 1-BASED INDEXING


#include<iostream>
#include<vector>
using namespace std;
    int main()
{
    int s;
    cout<<"enter the size of the array: ";
    cin>>s;

    vector<int> v(s+1,0);

    for(int i=1;i<=s;i++){
        int ele;
        cout<<"enter element: ";
        cin>>v[i];
    }

    for(int i=1;i<=s;i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"no of queries: ";
    cin>>q;

    while(q--){
        int l,r;
        cout<<"enter l: ";
        cin>>l;
        cout<<"enter r: ";
        cin>>r;

        int ans=0;
        //ans= prefixsum[r]-prefixsum[l-1];
        ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}