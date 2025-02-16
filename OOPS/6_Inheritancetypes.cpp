// // SINGLE INHERITANCE

// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//     Parent(){
//         cout<<"Parent Class"<<endl;
//     }
// };

// class Child: public Parent{
//     public:
//     Child(){
//         cout<<"Child Class"<<endl;
//     }
// };
// int main()
// {
//     Child c;
//     return 0;
// }


// MULTI LEVEL INHERITANCE

// #include<iostream>
// using namespace std;

// class Parent{
// public:
// Parent(){
//     cout<<"Parent Class"<<endl;
// }
// };

// class Child: public Parent{
//     public:
//     Child(){
//         cout<<"Child Class"<<endl;
//     }
// };

// class GrandChild: public Child{
//     public:
//     GrandChild(){
//         cout<<"Grand Child"<<endl;
//     }
// };
// int main()
// {
//     GrandChild gc;
//     return 0;
// }



// MULTIPLE INHERITANCE

// #include<iostream>
// using namespace std;

// class Parent1{
// public:
// Parent1(){
//     cout<<"Parent1 Class"<<endl;
// }
// };

// class Parent2{
// public:
// Parent2(){
//     cout<<"Parent2 Class"<<endl;
// }
// };

// class Child: public Parent1, public Parent2{
//     public:
//     Child(){
//         cout<<"Child Class"<<endl;
//     }
// };

// class GrandChild: public Child{
//     public:
//     GrandChild(){
//         cout<<"Grand Child"<<endl;
//     }
// };


// int main()
// {
//     GrandChild C;
//     return 0;
// }


// HIERACHICAL INHERITANCE

#include<iostream>
using namespace std;

class Parent1{
public:
Parent1(){
    cout<<"Parent1 Class"<<endl;
}
};

class Child1: public Parent1{
    public:
    Child1(){
        cout<<"Child1 Class"<<endl;
    }
};

class Child2: public Parent1{
    public:
    Child2(){
        cout<<"Child2 Class"<<endl;
    }
};


int main()
{
    Child2 C;
    return 0;
}


// HYBRID iNHERITANCE