#include <iostream>

using namespace std;
int main()
{
  int number;

  cout << "enter number: ";
  cin >> number;

  if (number % 5 == 0)
    if (number % 7 == 0)
    {
      cout << "multiple of 5 and 7";
    }
    else
    {
      cout << "not multiple of 5 and 7";
    }
  return 0;
}
