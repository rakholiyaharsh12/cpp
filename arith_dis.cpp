#include <iostream>
using namespace std;

class arith
{

    int a, b;

public:
    arith()
    {

        cout << "enter  value: ";

        cin >> a >> b;
        cout << a + b << endl;
    }
    ~arith()
    {
        cout << "destructor is running: ";
    }

    void fun1()
    {
        cout << "hello word: ";
    }

    void fun2(string name)
    {
        cout << "hello"
             << " " << name;
    }
};
int main()
{
    arith a1;

    a1.fun1();
    a1.fun2("class");
    return 0;
}