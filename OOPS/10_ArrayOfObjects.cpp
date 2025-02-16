#include<iostream>
using namespace std;

class my_class{
    int a;
    public:
        void setdata(int x){
            a=x;
        }

        void displaydata(){
            cout<<a;
        }
};

int main()
{
    my_class my_obj[3];
    my_obj[0].setdata(1);
    my_obj[1].setdata(2);
    my_obj[2].setdata(3);

    for(int i=0;i<3;i++){
        my_obj[i].displaydata();
    }
    return 0;
}