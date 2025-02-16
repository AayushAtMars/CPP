#include <iostream>
using namespace std;
void recur(int n)
{
    if(n==0){
        return;
    }
    recur(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    recur(n);
    return 0;
}