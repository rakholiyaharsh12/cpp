#include<iostream>
using namespace std;

class person
{
private:
    int age;
    string name , city;
public:
    void setname(string n)
    {
        name = n;
    }
    void setcity(string c)
    {
        city = c;
    }
    void setage(int a)
    {
        age = a;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getcity()
    {
        cout<<city<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

};
int main()
{
    int a;
    string b,c;

    
    person p1,p2,p3;

    p1.setname("harsh rakholiya");
    p1.setcity("surat");
    p1.setage(17);

    p2.setname("rudra");
    p2.setcity("ahmdabad");
    p2.setage(20);

    p3.setname("polra senil");
    p3.setcity("mumbai");
    p3.setage(34);

    p1.getname();
    p1.getcity();
    p1.getage();

    p2.getname();
    p2.getcity();
    p2.getage();

    p3.getname();
    p3.getcity();
    p3.getage();
    return 0;
}
