#include <iostream>
using namespace std;

class Base
{
    protected:
    int eng,hin,guj;
    public:
    void SetdataA()
    {
        cout << "Enter english marks  :";
        cin  >> eng;
        cout << "Enter hindi marks  :";
        cin  >> hin;
        cout << "Enter gujarati marks  :";
        cin  >> guj;
    }

};

class Derived : public Base
{
    int total,per;
    public:
    void SetdataB()
    {
        total = eng + guj + hin;
        cout << "Marks :" << total << endl;

        per = total * 100 / 300;
        cout << "Per :" << per << endl;
    }
};

int main()
{
    Derived d;
    d.SetdataA();
    d.SetdataB();
}
