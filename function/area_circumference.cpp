#include<iostream>
using namespace std;
void circle(int r){
    cout<<"area of the circle is "<<(3.14*r*r)<<endl;
    cout<<"circumference of the circle is "<<(2*3.14*r);
}
    int main()
{
    int r;
    cout<<"enter the radius of the circle: ";
    cin>>r;
    circle(r);
    return 0;
}