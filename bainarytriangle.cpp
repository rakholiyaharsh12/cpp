#include<iostream>
using namespace std;

class Triangle
{
    int l,w;

    public :

    void setdata(int a,int b)
    {
        l = a;
        w = b;
    }

    int getdata()
    {
        return l * w;
    }
    Triangle operator*(Triangle &s)
     {
        Triangle t;
        t.l = l * s.l;
        t.w = w * s.w;
        return t;
    }
};

int main()
{
    Triangle t1,t2,t3;
    t1.setdata(4,4);
    cout << "volume of Triangle  t1 is : " << t1.getdata() << endl;
    t2.setdata(5,5);
    cout << "volume of Triangle  t2 is : " << t2.getdata() << endl;


    t3 = t1 * t2;
    cout << "volume of Triangle  t3 is : " << t3.getdata()<<endl;

}
