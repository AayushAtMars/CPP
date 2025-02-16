#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    int year;

    void display(){
        cout<<brand<<" "<<year<<endl;
    }
};

int main()
{
    car c;
    c.brand="BMW";
    c.year=2023;
    c.display();
    return 0;
}