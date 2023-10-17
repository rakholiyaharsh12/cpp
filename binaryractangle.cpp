#include<iostream>
using namespace std;

class Rectangle
{
    int l,h;

    public :

    void setdata(int a,int b)
    {
        l = a;
        h = b;
    }

    int getdata()
    {
        return l * h;
    }
    Rectangle operator-(Rectangle &s)
    {
        Rectangle t;
        t.l = l - s.l;
        t.h = h - s.h;
        return t;
    }
};

int main()
{
    Rectangle r1,r2,r3;
    r1.setdata(4,4);
    cout << "volume of Rectangle r1 is : " << r1.getdata() << endl;
    r2.setdata(5,5);
    cout << "volume of Rectangle r2 is : " << r2.getdata() << endl;


    r3 = r1 - r2;
    cout << "volume of Rectangle r3 is : " << r3.getdata()<<endl;

}
