#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int rn = rand();

    int max = 100;
    int min = 10;
    rn = min + rand() % (max-min+1);
    cout << rn;

    return 0;
}