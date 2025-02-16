#include<iostream>
using namespace std;

class example{
    public:
    void show(){
        cout<<"Pointers to Objects"; 
    }
};

int main()
{
    example obj;
    example *ptr = &obj;
    ptr->show();
    return 0;
}