#include<iostream>
using namespace std;

class counter{
    private:
    static int count;

    public:
    counter(){                    //Increment count whenever an object is created
        count++;
    }

    static int getCount(){
        return count;
    }
};

int counter::count=0;
int main()
{
    counter c1,c2,c3;
    cout<<"No of Objects created = "<<counter::getCount()<<endl;
    return 0;
}