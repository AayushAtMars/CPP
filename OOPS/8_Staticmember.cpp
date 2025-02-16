#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter id : ";
            cin>>id;
            count++;
        }

        void getdata(){
            cout<<"The id of employee is : "<<id<<" and this employee number is "<<count<<endl;
        }
};

int employee::count; //default value is zero

int main()
{
    employee harry,rohan,aayush;

    harry.setdata();
    harry.getdata();
    rohan.setdata();
    rohan.getdata();
    aayush.setdata();
    aayush.getdata();
    return 0;
}