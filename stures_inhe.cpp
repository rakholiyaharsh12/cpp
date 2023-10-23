#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void setdatA(){
        cout<<"Enter a: ";
        cin>>a;
    }
};
class derived : public base
{
    int b;
    public:
    void setdataB(){
        cout<<"enter b:";
        cin>>b;
    }
    void getter(){
        cout<<"Addition of a and b is : "<<a*b<<endl;
    }
};
int main(){
    derived d;
    d.setdatA();
     d.setdataB();
    d.getter();
}



// student result
// square no of up to given number
