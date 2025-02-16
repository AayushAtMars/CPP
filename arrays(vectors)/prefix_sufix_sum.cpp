// CHECK IF WE CAN PARTITION THE ARRAY INTO TWO SUBARRAYS WITH EQUAL SUM.
// MORE FORMALLY, CHECK THAT THE PREFIX SUM OF A PART OF THE ARRAY IS EQUAL
// TO THE SUFFIX SUM OF THE REST OF THE ARRAY.


#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        
        if(suffix_sum==prefix_sum){
            return true;
        }
    }
    return false;
}
    int main()
{
    int s;
    cout<<"enter the number of elements of the array: ";
    cin>>s;

    vector <int> v;

    for(int i=0;i<s;i++){
        int ele;
        cout<<"enter the elements: ";
        cin>>ele;
        v.push_back(ele);
    }

    cout<<checkPrefixSuffixSum(v);
    return 0;
}