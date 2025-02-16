#include<iostream>
using namespace std;

class complex{
    private:
    int real,imag;

    public:
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    friend complex operator+(complex &c1,complex &c2);

    void show(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

complex operator+(complex &c1,complex &c2){
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}

int main()
{
    complex c1(3, 4), c2(1, 2);

    // Use overloaded '+' operator to add two Complex objects
    complex c3 = c1 + c2;

    // Display results
    cout << "First Complex number: ";
    c1.show();

    cout << "Second Complex number: ";
    c2.show();

    cout << "Sum of Complex numbers: ";
    c3.show();
    return 0;
}