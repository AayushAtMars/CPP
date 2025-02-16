#include<iostream>
using namespace std;

class animal{
    public:
    animal(){
        cout<<"Animal Constructor"<<endl;
    }

    ~animal(){
        cout<<"Animal Desstructor"<<endl;
    }

    void eat(){
        cout<<"I can eat"<<endl;
    }
};

class dog:public animal{
    public:
    dog(){
        cout<<"Dog Constructor"<<endl;
    }

    ~dog(){
        cout<<"Dog Desstructor"<<endl;
    }

    void bark(){
        cout<<"I can bark"<<endl;
    }
};



int main()
{
    cout<<"\nCreating dog object....."<<endl;
    dog d;

    cout<<"\nCalling functions....."<<endl;
    d.eat();
    d.bark();

    cout<<"\nExiting Functions...."<<endl;
    
    return 0;
}