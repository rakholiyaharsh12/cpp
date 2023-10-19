#include<iostream>
using namespace std;

class check
{
    int a,b,c;
    public :
            void getdata()
            {
                cout<<"Enter a and b :";    
                cin>>a>>b;
            }
           
            friend int check2(check);
    
};


int check2(check c)
{
        if(c.a>c.b)
        {
            cout << "a is greater "<<endl;
        }
        else{
            cout<<"b is greater";
        }
        return 0;
    
}

int main()
{
    check c1,c2;
    int a,b;

    c1.getdata();
     check2(c1);

}
