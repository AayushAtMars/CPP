#include<iostream>
using namespace std;

class example{
    public:
    int a;

    void add(example e){
        a=a+e.a;
    }
};
int main()
{
    example e1,e2;
    e1.a=50;
    e2.a=100;
    cout<<"initial Value"<<endl;
    cout<<e1.a<<endl;
    cout<<e2.a<<endl;


    e2.add(e1);
    cout<<"After Passing object as argument"<<endl;
    cout<<e1.a<<endl;
    cout<<e2.a<<endl;


    return 0;
}