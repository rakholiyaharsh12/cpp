#include <iostream>
using namespace std;
void century()
{
    int year;

    cout << "enter year";
    cin >> year;

    if (year % 100 == 0)
    {
        cout << ("century year");
    }
    else
    {
        cout << "not century year";
    }
}
int main()
{
    century();

    return 0;
}