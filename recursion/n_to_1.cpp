#include <iostream>
using namespace std;
void recur(int n)
{
    if(n==0){
        return;
    }
    cout << n << " ";
    recur(n - 1);
}
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    recur(n);
    return 0;
}