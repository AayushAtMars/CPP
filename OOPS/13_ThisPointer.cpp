#include<iostream>
using namespace std;

class example{
    public:
    int value;
    example(int value){
        this->value=value;
    }
};

int main()
{
    example e1(10);
    cout<<e1.value;
    return 0;
}