#include<iostream>
using namespace std;

class box{
    private:
    double width;

    public:
    box(double w){    // Constructor to initialize width
        width = w;
    }
    //Friend function declaration
    friend void showWidth(box &b);
};

//function definition
void showWidth(box &b){
    cout<<"Width of the box is "<<b.width<<endl;
}

int main()
{
    box b1(10.4);

    showWidth(b1);
    return 0;
}