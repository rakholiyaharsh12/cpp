#include <iostream>
using namespace std;

class ractangle
{
private:
    int length, hight;

public:
    int i = length, h = hight;

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
    cin >> a >> b;

    ractangle r1;
    cout << r1.area(a, b) << endl;
    cout << r1.circ(a, b);
    return 0;
}