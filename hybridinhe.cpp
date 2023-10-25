#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA(){
        cout<<"Enter a:";
        cin>>a;
    }
};

    class Derived1 : public base {
    protected:
    int b;
     public:
    void setB(){
        cout<<"Enter b: ";
        cin>>b;
    }
};
class derived2{
    protected:
    int c;
    public:
    void setC(){
        cout<<"Enter b: ";
        cin>>c;
    }
};

class Test : public Derived1, public derived2
{
    public:
    void product(){
        cout<<"product of a,b and c is: "<<a*b*c<<endl;
    }
};

int main()
{
    Test t;
    t.setA();
    t.setB();
    t.setC();
    t.product();
}