// GIVEN AN ARRAY OF INTEGER 'a', MOVE ALL THE EVEN INTEGERS AT THE BEGINNING OF THE ARRAY
// FOLLOWED BY ALL THE ODD INTEGERS. THE RELATIVE ORDER OF ALL ODD OR EVEN INTEGERS DOES NOT 
// MATTER. RETURN ANY ARRAY THAT SATISFIES THE CONDITION.

#include<iostream>
#include<vector>
using namespace std;

void sortOddEven(vector <int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2!=0 && v[right_ptr]%2==0){
            // int temp;
            // temp=v[left_ptr];
            // v[left_ptr]=v[right_ptr];
            // v[right_ptr]=temp;
            swap(v[left_ptr],v[right_ptr]);
            right_ptr--;
            left_ptr++;
        }

        if(v[left_ptr]%2==0){
            left_ptr++;
        }

        if(v[right_ptr]%2!=0){
            right_ptr--;
        }
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
        int element;
        cout<<"enter elements: ";
        cin>>element;
        v.push_back(element);
    }

    sortOddEven(v);

    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}