/*
friend function
declare in class,define outside of class
dirctly called

object as argumentand as return
*/
#include<iostream>
using namespace std;
class rect
{
     friend rect add (rect,rect,rect,rect);
    int l , w;

    public:
    void setdata(int a,int b)
    {
        l = a;w = b;                            /*    largest number of among them using frind functin */
    }
    
        int getarea()
    {    
            return l*w;
        
    }
};
rect add(rect m,rect n,rect x,rect y)
{
    rect t;
    t.l = m.l + n.l + x.l - y.l;
    t.w = m.w + n.w + x.w - y.w;
    return t;
}
int main()
{
    rect a,b,c,d,e;
    a.setdata(4,5);
    cout<<"Area of ractangle A is : "<<a.getarea()<<endl;
    b.setdata(7,8);
    cout<<"Area of ractangle B is : "<<b.getarea()<<endl;
    d.setdata(2,3);
    cout<<"Area of ractangle D is : "<<d.getarea()<<endl;
    e.setdata(6,9);
    cout<<"Area of ractangle E is : "<<e.getarea()<<endl;

    c=add(a,b,d,e);
    cout<<"area of ractangle C is : "<<c.getarea()<<endl;
}
