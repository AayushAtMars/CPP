// GIVEN A BOOLEAN 2D ARRAY, WHERE EACH ROW IS SORTED. FIND THE ROW WITH THE MAXIMUM NUMBER OF 1s

//INPUT: ROW = 3, COL= 4
//MATRIX[] = {{0,1,,1,1},
            // {0,0,0,1},
            // {0,0,0,1}}
// OUTPUT: 0



#include<iostream>
#include<vector>
using namespace std;


int maximumOnesRow(vector<vector<int>>&V){

    int maxOnes=INT8_MIN;
    int MaxOnesRow=-1;
    int column=V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if (V[i][j]==1){
                int numberOfOnes=column-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    MaxOnesRow=i;
                }
                break;
            }
        }
    }
    return MaxOnesRow;

}
    int main()
{
    int n,m;
    cout<<"Enter Rows : ";
    cin>>n;
    cout<<"Enter Columns : ";
    cin>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element for"<<i<<","<<j ;
            cin>>vec[i][j];
        }
    }
    int res=maximumOnesRow(vec);
    cout<<res<<endl;
    return 0;
}