// GIVEN AN INTEGER 'a' SORTED IN NON-DECREASING ORDER, RETURN AN ARRAY OF THE SQUARES
// OF EACH NUMBER SORTED IN NON-DECREASING ORDER.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void sortedSquared(vector <int> &v){
    vector<int>ans;
    int left_pointer=0;
    int right_pointer=v.size()-1;
    while(left_pointer<=right_pointer){
        if(abs(v[left_pointer])<abs(v[right_pointer])){
            ans.push_back(v[right_pointer]*v[right_pointer]);
            right_pointer--;
        }
        else{
            ans.push_back(v[left_pointer]*v[left_pointer]);
            left_pointer++;
        }
    }
    
    reverse(ans.begin(),ans.end());

    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }

}
    int main()
{
    int s;
    cout<<"enter the size of the array: ";
    cin>>s;
    vector<int>v;
    for(int i=0;i<s;i++){
        int element;
        cout<<"enter elements: ";
        cin>>element;
        v.push_back(element);
    }

    sortedSquared(v);

    return 0;
}