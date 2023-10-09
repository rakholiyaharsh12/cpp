#include<iostream>
using namespace std;


class triangle
{
    int base,height,length,weith;

    public:
    triangle(int b,int h,int l)
    {
        base =b;
        height=h;
        length=l;
    }
     void area (int b,int h,int l)       
    {
        cout<<12*b*h*l<<endl;
    }

};

int main()
{
    int a,b,c;
    cout<<"enter base value: ";
    cin>>a;
    cout<<"enter hight value: ";
    cin>>b;
    cout<<"enter lenght value: ";
    cin>>c;
    triangle r1(a,b,c);
    r1.area(a,b,c);

}