// GIVEN A SQUARE MATRIX, TURN IT BY 90 DEGREE IN ACLOCKWISE DIRECTION WITHOUT USING ANY EXTRA SPACE.

// 1 2 3              7 4 1
// 4 5 6     --->     8 5 2
// 7 8 9              9 6 3

// INPUT: MATRIX = [[1,2,3],[4,5,6],[7,8,9]]
// OUTPUT:[[7,4,1],[8,5,2],[9,6,3]]

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotateVector(vector<vector<int>>&v){

    //Transpose
    int r=v.size();
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    //reverse every row
    for(int j=0;j<r;j++){
        reverse(v[j].begin(),v[j].end());
    }    
}


    int main()
{
    int r,c;
    cout<<"Enter no of rows : ";
    cin>>r;
    cout<<"Enter no of columns : ";
    cin>>c;

    vector<vector<int>>matrix(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"enter element for"<<i<<","<<j<<" ";
            cin>>matrix[i][j];
        }
    }

    cout<<"Matrix without rotation is\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    rotateVector(matrix);


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}