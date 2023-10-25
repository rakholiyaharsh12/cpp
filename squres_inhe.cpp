#include <iostream>
using namespace std;

class Base
{
    protected:
    int square;
    public:
    void SetdataA()
    {
        cout << "Enter A Square Number  :";
        cin  >> square;
    }

};

class Derived : public Base
{
    int sum,i;
    public:
    void SetdataB()
    {
        for ( i = 0; i <= square; i++){
        
            sum = i*i;
            cout << "Sum  :" << sum << endl;
        }
        
    }

};

int main()
{
    Derived d;
    d.SetdataA();
    d.SetdataB();
}
