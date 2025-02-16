#include<iostream>
using namespace std;

class example{
    public:
        void show();
};

void example :: show(){
    cout<<"Scope resolution operator";
}

int a =20;
int main()
{
    example e;
    e.show();
    int a = 10;
    cout<<endl<<a<<endl<<::a;
    return 0;
}