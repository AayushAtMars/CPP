#include<iostream>
using namespace std;

// class class_name{
//     int data1;
//     int data2;
// };

class fruit{
public:
    string name;
    string color;
};

class student{
    string name;
    int rollno;
};

int main(){

    fruit apple; //object
    apple.name="Apple";
    apple.color="red";

    cout<<apple.name<<" - "<<apple.color<<endl;

    fruit *mango=new fruit();
    mango->name="Mango";
    mango->color="Yellow";

    cout<<mango->name<<" - "<<mango->color;
}