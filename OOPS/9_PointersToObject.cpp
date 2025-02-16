#include<iostream>
using namespace std;

class complex{
    int real,imaginary;

    public:

        void setdata(int a,int b){
            real=a;
            imaginary=b;
        }

        void getdata(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
};

int main()
 {
    complex c1;
    complex *ptr=&c1;
    // complex *ptr = new complex;
    // ptr->setdata(2,3);
    (*ptr).setdata(2,3);
    (*ptr).getdata();
    return 0;
}