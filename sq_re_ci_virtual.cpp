#include <iostream>
using namespace std;

class shape
{

public:
    virtual void print()
    {
        cout << "printf shape value: ";
    }
};
class square : public shape
{
public:
int s;
    void print() override
    {
        cout << "Square area is :";
        cin>> s;
        
        cout<<"square shape value: "<<s*s<<endl;
        

    }
};
class ractangle : public shape
{
public:
int l,h;
    void print() override
    {
        cout << "ractangle area is :";
        cin>> l,h;
        
        cout<<"ractangle shape value: "<<l*h<<endl;
        
    }
};
class circle : public shape
{
public:
int r;
    void print() override
    {
        cout << "circle area is :";
        cin>> r;
        
        cout<<"circle shape value: "<<2*3.14*r<<endl;
        
    }
};
int main()
{
    shape* myshape;

    square mysquare;
    ractangle myractangle;
    circle mycircle;

    myshape=  &mysquare;
    myshape -> print();

    myshape = &myractangle;
    myshape -> print();

    myshape = &mycircle;
    myshape -> print();
}