#include <iostream>
using namespace std;

class triangle
{
private:
    int base, hight;

public:
    triangle (int b,int h)
    {
        base = b,hight = h;
    }

    int area(int b, int h)
    {
        return 0.5*b*h;
    }
    int circ(int b, int h)
    {
        return 3 *b;
    }
};
int main()
{
    int a, b;
    cout<<"enter value:";
    cin >> a >> b;

    triangle r1(a,b);
    cout << r1.area(a,b) << endl;
    cout << r1.circ(a,b);
    return 0;
}