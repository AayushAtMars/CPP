// GIVEN A MATRIX 'A'OF DIMENSION  NxM AND 2 CORDINATES (L1,R1) AND (L2,R2). RETUIRN 
// THE SUM OF THE RECTANGLE FROM (L1,R1) TO (L2,R2).

// EG = 1  2  3  4
//      5  6  7  8
//      9  10 11 12

//      L1,R1=1,1
//      L2,R2=2,2
//      SUM=6+7+10+11



#include<iostream>
#include<vector>
using namespace std;



vector<vector<int>> matrix()
    int main()
{
    int r,c;
    cout<<("Enter the no of rows : ");
    cin>>(r);
    cout<<("Enter the columns : ");
    cin>>(c);


    vector<vector<int>>matrix(r,vector<int>(c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the value of "<<i<<","<<j<<": " ;
            cin>>matrix[i][j];
        }
    }

    sumOfRectangle(matrix);
    return 0;
}












// #include<stdio.h>
//     int main()
// {
//     int a;
//     printf("Enter the no : ");
//     scanf("%d",&a);
//     int sum=0;
//     while(a>0){
//         int rem=a%10;
//         sum=sum*10+rem;
//         a=a/10;
//     }
//     printf("%d",sum);
//     return 0;
// }