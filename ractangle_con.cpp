#include <iostream>
using namespace std;

class ractangle
{
private:
    int length, hight;

public:
    ractangle(int l,int h)
    {
    int  length=l,hight=h;
    }

    int area(int l, int h)
    {
        return l * h;
    }
    int circ(int l, int h)
    {
        return 2 * (l + h);
    }
};
int main()
{
    int a, b;
     cout<<"enter value: ";
    cin >> a >> b;

    ractangle r1(a,b);
   
    cout<< r1.area(a,b);
    cout<< r1.circ(a,b);
    return 0;
}