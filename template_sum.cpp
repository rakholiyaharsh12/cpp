#include<iostream>
using namespace std;

template <class t>
t sum(t x,t y)
{
    return x*y;
}

int main ()
{
    int a,b;
    cout<< sum(5,20)<<endl;
    cout<< sum(12.3,23.5)<<endl;

    a>b ? cout<<"a is big :" : cout<<"b is big :";

    return 0;
}