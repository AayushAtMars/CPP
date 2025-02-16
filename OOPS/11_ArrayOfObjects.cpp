#include<iostream>
using namespace std;

class example{
    public:
    int value;
    void setValue(int v){
        value =v;
    }
};

int main()
{
    example e[2];
    e[0].setValue(10);
    e[1].setValue(20);
    e[2].setValue(30);

    cout<<e[0].value<<endl;
    cout<<e[1].value<<endl;
    cout<<e[2].value<<endl;
    return 0;
}