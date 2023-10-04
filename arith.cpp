#include<iostream>
using namespace std;

class arith
{

    int a,b;

public:
    arith()
    {

        cout<<"enter  value: ";
        
        cin>>a>>b;
        cout<<a+b<<endl;
    }
        // cout<<"enter a value: "<<a;
        // cin>>a;
        // cout<<"enter b value: "<<b;
        // cin>>b;

    void fun1()
    {
        cout<<"hello word: ";
    }

    
    
};
 int main()
 {
    arith a1;

    a1.fun1();
    return 0;
 }