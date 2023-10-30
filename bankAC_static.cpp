#include<iostream>
using namespace std;
class bankAC
{
    public:

    int amt;
    int d;
    int w;
    static int total;

    bankAC(int b)
    {
        amt=b;
        total+=amt;
    }
    void withdraw(int a)
    {
        w=a;
        amt-=w;
        total-=w;
        cout<<amt<<endl;
    }
    void deposite(int c)
    {
        d=c;
        amt+=d;
        total+=d;
        cout<<amt<<endl;
    }
    static void Totalbal()
    {
        cout<<"Total balance is : "<<total<<endl;
    }
};

int bankAC::total =0;
int main ()
{
  bankAC b1(1000);
  bankAC b2(1500);

  b1.deposite(1200);
  b2.withdraw(500);

  bankAC :: Totalbal();


}