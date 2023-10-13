#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int k = 0;
    int a = 0;
    int d = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter arr value:";
            cin >> (arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ("%d\t ", arr[i][j]);
        }
        cout << ("\n");
    }
    k = arr[0][0] + arr[1][1] + arr[2][2];

    cout << ("%d  ", k);

    a = arr[0][1] + arr[0][2] + arr[1][2];
    cout << ("%d ", a);

    d = arr[1][0] + arr[2][0] + arr[2][1];
    cout << ("%d ", d);
    return 0;
}