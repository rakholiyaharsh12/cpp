#include<iostream>
using namespace std;
void positive()
{
    int a;
    cout<<"enter a value";
    cin>>a;
    if(a>0)
    {
        cout<<"number is positive";
    }
    else
    {
        cout<<"number is nagative";
    }
}
int main()
{
    positive();
    return 0;
}