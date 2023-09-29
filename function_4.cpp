#include<iostream>
using namespace std;
void greaterthan()
{
    int number;

    cout<<"enter number";
    cin>> number;

    if(number>100)
    {
        cout<<"number is graterthan 100";
    }
    else
    {
        cout<<"not graterthan 100";
    }
}
int main()
{
    greaterthan();
    return 0;
}