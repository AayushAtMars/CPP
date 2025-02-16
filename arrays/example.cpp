#include<iostream>
using namespace std;
    int main()
{
    int marks[]={23,44,45,67};
    int m_marks[4];
    m_marks[0]=1;
    m_marks[1]=2;
    m_marks[2]=3;
    m_marks[3]=4;
    m_marks[1]=100;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    // cout<<m_marks[0]<<endl;
    // cout<<m_marks[1]<<endl;
    // cout<<m_marks[2]<<endl;
    // cout<<m_marks[3]<<endl;
    for(int i=0;i<4;i++){
        cout<<"the valuebof marks "<<i+1<<" is "<<m_marks[i]<<endl;
    }
    return 0;
}