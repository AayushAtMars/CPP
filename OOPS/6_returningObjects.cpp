#include<iostream>
using namespace std;

class example{
    public:
    int a;

    example add(example ea, example eb){
        example ec;
        ec.a=a+ea.a+eb.a;

        return ec;
    }
};

int main()
{
    example e1,e2,e3;
    e1.a=50;
    e2.a=100;
    e3.a=200;

    cout<<"intially"<<endl;
    cout<<e1.a<<endl<<e2.a<<endl<<e3.a<<endl;


    e3 = e3.add(e1,e2);
    cout<<"finally"<<endl;
    cout<<e1.a<<endl<<e2.a<<endl<<e3.a<<endl;
    return 0;
}