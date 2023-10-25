#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};
class Derived1 : public base {
    int b;
    public:
    void setB(){
        cout<<"Enter b: ";
        cin>>b;
    }
    void addition(){
        cout<<"addition of a and b is: "<<a+b<<endl;
    }
};
class Derived2: public base{
    int c;
    public:
    void setC (){
        cout<<"Enter b: ";
        cin>>c;
    }
    void product(){
        cout<<"Product of a and b is : "<<a*c<<endl;
    }
};

int main()
{
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.addition();

    Derived2 d2;
    d2.setA();
    d2.setC();
    d2.product();

}

// factoriyal no & table