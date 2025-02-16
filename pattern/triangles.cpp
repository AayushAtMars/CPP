// *
// **
// ***
// ****

#include<iostream>
using namespace std;
    int main()
{
    int r;
    cout<<"enter the side of square: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<< '*'<<" ";
        }
        cout<<endl;
    }
    return 0;
}


// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
//     int main()
// {
//     int r;
//     cout<<"enter the side of square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0){
//                 cout<<j<<" ";
//             }
//             else{
//                 cout<< char(64+j)<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//******************************************************

// *****
// ***
// **
// *


// #include<iostream>
// using namespace std;
//     int main()
// {
//     int r;
//     cout<<"enter the side of square: ";
//     cin>>r;
//     for(int i=0;i<r;i++){
//         for(int j=1;j<=r-i;j++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//**********************************************


// 1
// 2 3
// 4 5 6
// 7 8 9 10
//floyd's triangle
// #include<iostream>
// using namespace std;
//     int main()
// {
//     int r;
//     cout<<"enter the side of square: ";
//     cin>>r;
//     int a=1;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//****************************************************


// 1
// 0 1
// 1 0 1
// 0 1 0 1

// #include<iostream>
// using namespace std;
//     int main()
// {
//     int r;
//     cout<<"enter the side of square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<1<<" ";
//             }
//             else{
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//**********************************************************