// SORT ARRAY CONSISTING OF 0s AND 1s

// #include<iostream>
// #include<vector>
// using namespace std;


// void sortZeroesAndOnes(vector<int> &v){
//     int count=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             count++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }
//     int main()
// {
//     int s;
//     cout<<"enter no of elements in array: ";
//     cin>>s;
//     vector<int>v;

//     for(int i=0;i<s;i++){
//         int element;
//         cout<<"enter elements: ";
//         cin>>element;
//         v.push_back(element);
//     }

//     sortZeroesAndOnes(v);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }



// TWO POINTER METHOD

#include<iostream>
#include<vector>
using namespace std;


void sortZeroesAndOnes(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr!=right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
}
    int main()
{
    int s;
    cout<<"enter no of elements in array: ";
    cin>>s;
    vector<int>v;

    for(int i=0;i<s;i++){
        int element;
        cout<<"enter elements: ";
        cin>>element;
        v.push_back(element);
    }

    sortZeroesAndOnes(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}