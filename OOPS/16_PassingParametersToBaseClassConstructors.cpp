#include<iostream>
using namespace std;

class animal{
    protected:
    string name;

    public:
    animal(string n){
        name=n;
        // cout<<"Animal constructor called for "<<name<<endl;
    }

    void display(){
        cout<<"Animal name is "<<name<<endl;
    }
};

class dog:public animal{
    private:
    string breed;

    public:
    dog(string n,string b):animal(n), breed(b){
        // cout<<"Dog constructor called for breed "<<breed<<endl;
    }

    void displayInfo(){
        display();
        cout<<"Breed is "<<breed<<endl;
    }

    
};

int main()
{
    dog d("Buddy", "Labrador");
    d.displayInfo();
    return 0;
}