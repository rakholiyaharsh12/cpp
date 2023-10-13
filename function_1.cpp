#include <iostream>
using namespace std;
void subject()
{
    int maths, english, gujarati, total;

    maths = 50;
    english = 60;
    gujarati = 80;
    total = maths + english + gujarati;

    cout << "total:" << total;
}
int main()
{
    subject();

    return 0;
}