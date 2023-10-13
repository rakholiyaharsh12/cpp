#include <iostream>
using namespace std;
void multiple()
{
        int num;

        cout << "enter number";
        cin >> num;
        if (num % 5 == 0 && num % 7 == 0)
        {

                cout << "multiple";
        }
        else
        {
                cout << "not multiple";
        }
}
int main()
{
        multiple();
        return 0;
}