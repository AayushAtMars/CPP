#include<iostream>
using namespace std;

class sample{
    private:
        int a;

    public:
        void set(int i){
            a=i;
        }

        sample sum(sample x, sample y){
            // sample return1;
            // a=20;
            // return (return1);
            a=x.a+y.a;
        }

        void display(){
            cout<<"value of a = "<<a<<endl;
        }
};

int main()
{
    sample s1,s2,s3;
    s1.set(10);
    s2.set(20);
    s3.sum(s1,s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}