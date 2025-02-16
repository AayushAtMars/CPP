// # # * # #
// # # * # #
// * * * * *
// # # * # #
// # # * # #

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the side of the square: ";
//     cin>>r;
//      int mid=(r/2)+1;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r;j++){
//             if(i==mid||j==mid){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"#"<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//************************************


// * * * * * *
// *         *
// *         *
// * * * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the side of the square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r;j++){
//             if(i==1||i==r||j==1||j==r){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//*************************************************************************

// *      *
//   *  *
//     *
//   *   *
// *       *

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the side of the square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r;j++){
//             if(j==i|| j==r-i+1){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//       *
//     * *
//   * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"enter the side of the square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r-i;j++){
//                 cout<<" "<<" ";
//         }
//                 for(int k=1;k<=i;k++){
//                     cout<<'*'<<" ";
//                 }
//     cout<<endl;
//     }
//     return 0;
// }


//       * * * *
//     * * * *
//   * * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     cout<<"enter the side of square: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=r-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=r;k++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//       *
//     * * *
//   * * * * *
// * * * * * * *

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter number of row: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<" "<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//       *
//     * * * 
//   * * * * *
// * * * * * * *
//   * * * * * 
//     * * *
//       *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r;
//     cout<<"enter number of row: ";
//     cin>>r;
//     for(int i=1;i<=((r/2)+1);i++){
//         for(int j=1;j<=((r/2)+1)-i;j++){
//             cout<<" "<<" ";
//         }
//         for(int k=1;k<=(2*i)-1;k++){
//             cout<<'*'<<" ";
//         }
//         cout<<endl;
//     }
//     for(int l=1;l<=r/2;l++){
//         for(int m=1;m<=l;m++){
//             cout<<" "<<" ";
//         }
//         for(int n=1;n<=(r-(2*l));n++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
