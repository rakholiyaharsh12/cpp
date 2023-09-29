#include<iostream>
using namespace std;
int main()
{
    int a = 20,*p;

    p =&a;

    cout<<"\nvlue of a is :"<<a;
    cout<<"\nAdddress of a is :"<<a;
    cout<<"\nAdddress of a in p is :"<<p;
    cout<<"\nAdddress of p is :"<<p;
    cout<<"\nvlue of a in p is :"<<*p;
}