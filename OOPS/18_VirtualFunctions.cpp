#include<iostream>
using namespace std;

class animal{
    public:
    virtual void sound(){
        cout<<"Animal sound"<<endl;
    }
};

class dog : public animal{
    public:
    void sound() override{
        cout<<"Dog Barks"<<endl;
    }
};

class cat : public animal{
    public:
    void sound() override{
        cout<<"Cat Meows"<<endl;
    }
};

int main()
{
    //Base class pointer
    animal *ptr;
    dog d;
    cat c;

    ptr=&d;
    ptr->sound();

    ptr=&c;
    ptr->sound();
    return 0;
}