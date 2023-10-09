#include <iostream>

using namespace std;

class Solid
{
private:
    int base, height;
    int length, breadth;
    int square;
    int radius;

public:
    // Triangle
    Solid(int b, int h)
    {
        base = b;
        height = h;
    }

    //Rectangle
    Solid(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // Square
    Solid(int s)
    {
        square = s;
    }

    //Circle 
    Solid(double d)
    {
        radius = d;
    } 
    
    ~Solid()
    {
        cout<<"Your Program Is Run";
    }  

    void area(int b, int h)
    {
        cout << "Area of Triangle :" << 12 * b * h << endl;
    }

    void area(double l,double b)
    {
        cout<< "Area of Rectangle :"<<l * b << endl; 
    }

    void area(int s)
    {
        cout<<"Area of Square :"<<s*s<<endl;
    }

    void area(double d)
    {
        cout<<"Area of Circle :"<< 2 * 3.14 * d <<endl;
    }

};

int main()
{
    int x, y;
    cout << "ENter the Base:";
    cin >> x;
    cout << "ENter the Height:";
    cin >> y;

    double a, b;
    cout << "Enter the length :";
    cin >> a;
    cout << "Enter the breath :";
    cin >> b;

    int c;
    cout<<"ENter the Square:";
    cin>>c;

    double d;
    cout<<"Enter the Circle :";
    cin>>d;

    Solid s1(x, y);
    s1.area(x, y);

    Solid s2(a, b);
    s2.area(a, b);

    Solid s3(c);
    s3.area(c);

    Solid s4(d);
    s4.area(d);
}
