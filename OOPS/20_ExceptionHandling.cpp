#include<iostream>
using namespace std;
int main()
{
    int numerator,denominator;
    cin>>numerator>>denominator;
    cout<<numerator<<"/"<<denominator<<endl;

    try{
        if(denominator==0){
            throw "Division by Zero Error";
            
        }
        cout<<numerator/denominator<<endl;
    }

    catch (const char* msg){
        // print the exception
        cout << "Exception " << msg << endl;
        // cout<<"Division by Zero Error"<<endl;
    }
    return 0;
}