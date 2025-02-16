// GIVEN Q QUERIES, CHECK IF THE GIVEN NUMBER IS PRESENT IN THE ARRAY OR NOT
//NOTE: VALUE OF ALL ELEMENTS IN THE ARRAY IS LESS THAN 10 TO THE POWER 5

#include<iostream>
#include<vector>
using namespace std;
    int main()
{
    int n;
    cout<<"enter no of elements in array: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout<<"enter element: ";
        cin>>v[i];
    }

    const int N=1e5+10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    cout<<"enter no of queries: ";
    int q;
    cin>>q;

    while(q--){
        int queryelement;
        cout<<"enter queryelement: ";
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    return 0;
}