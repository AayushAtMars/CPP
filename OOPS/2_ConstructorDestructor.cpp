#include<iostream>
using namespace std;

class rectangle{    
public:
    int length;
    int breadth;

    rectangle(){  //DEFAULT CONSTRUCTOR - NO ARGUMENTS PASSED
        length=0;
        breadth=0;
    }

    rectangle(int x,int y){  //PARAMETERISED CONSTRUCTOR - ARGS PASS
        length=x;
        breadth=y;

    }

    rectangle(rectangle& r){  //COPY CONSTRUCTOR - INTIALISE AN OBJECT WITH ANOTHER EXISTING OBJECT
        length=r.length;
        breadth=r.breadth;
    }

    ~rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{

    rectangle r1;
    cout<<r1.length<<" - "<<r1.breadth<<endl;
    // rectangle* r1 = new rectangle();
    // cout<<r1->length<<" - "<<r1->breadth<<endl;
    // delete r1;

    rectangle r2(3,4);
    cout<<r2.length<<" - "<<r2.breadth<<endl;

    rectangle r3=r2;
    cout<<r3.length<<" - "<<r3.breadth<<endl;
    return 0;
}