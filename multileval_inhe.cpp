// Maltileval inheritance :-

#include <iostream>
using namespace std;

class base1
{
    protected:
    int x;
    public:
    void Setdata()
    {
        cout << "ENter the X Value :";
        cin >> x;
    }

};

class base2 :public base1
{
    protected:
    int y;
    public:
    void SetdataX()
    {
        cout << "ENter the Y Value :";
        cin >> y;
    }
    
};

class Deny : public base2
{
    public:
    int sum;
    void setdataY()
    {
        sum = x + y;
        cout << "SUM :" << sum << endl;
    }
};

int main()
{
    Deny d1;
    d1.Setdata();
    d1.SetdataX();
    d1.setdataY();
}
// fibonaci seriesh