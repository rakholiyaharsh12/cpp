#include <iostream>
using namespace std;
void num()
{
    int a, i;

    cout << "entera value";
    cin >> a;

    for (i = 0; i < a; i++)
    {
        cout << " hello world\n";
    }
    cout << ("i: %d", i);
}
int main()
{
    num();
    return 0;
}