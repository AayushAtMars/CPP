#include<iostream>
using namespace std;

class rectangle{
    private:
    double length;
    double breadth;

    public:

    rectangle(double l, double b){
        length = l;
        breadth = b;
    }
    friend class calculate;
};

class calculate{
    public:
    double calculateArea(rectangle &r){
        return r.length*r.breadth;
    }
};

int main()
{
    rectangle r1(10.1,20.2);

    calculate result;
    cout<<"Area is "<<result.calculateArea(r1);
    return 0;
}