#include<iostream>
using namespace std;

class rectangle{
    public:
        int length;
        int breadth;

        //Default Consructor
        rectangle(){
            length = 0;
            breadth = 0;
        }

        //Parameterized Constructors
        rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        //Copy Constructors
        rectangle(rectangle &r){
            length = r.length;
            breadth = r.breadth;
        }

        //Destructor
        ~rectangle(){
            cout<<"Destructor is called"<<endl;
        }
};

int main()
{
    rectangle r1;
    cout<<r1.length<<" - "<<r1.breadth<<endl;

    rectangle r2(10,20);
    cout<<r2.length<<" - "<<r2.breadth<<endl;

    rectangle r3 = r2;
    cout<<r3.length<<" - "<<r3.breadth<<endl;
    
    return 0;
}