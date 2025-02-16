// GIVEN AN NXM MATRIX 'A', RETURN ALL ELEMENTS OF THE MATRIX IN SPIRAL ORDER

// 1->2->3
//       |
// 4->5  6           =    1 2 3 6 9 8 7 4 5
// |     |
// 7<-8<-9




#include<iostream>
#include<vector>
using namespace std;


void spiralOrder(vector<vector<int>>&matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    int direction=0;

    while(left<=right && top<=bottom){
        //LEFT -> RIGHT
        if(direction==0){
            for(int col=left;col<=right;col++){
                cout<<matrix[top][col]<<" ";
            }
            top++;
        }

        // TOP -> BOTTOM
        if(direction==1){
            for(int row=right;row<=bottom;row++){
                cout<<matrix[row][right]<<" ";
                }
                right--;
            }

        //RIGHT -> LEFT
        if(direction==2){
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }

        //BOTTON -> TOP
        else{
            for(int row=bottom;row<=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }

        //0,1,2,3
        direction=(direction+1)%4;
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
            cout<<"Enter value for "<<i<<","<<j<<" : ";
            cin>>matrix[i][j];
        }
    }

    spiralOrder(matrix);
    
    return 0;
}