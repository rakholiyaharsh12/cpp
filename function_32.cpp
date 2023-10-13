#include <iostream>
using namespace std;
int english, gujarati, maths, total, marks, percent;
void get()
{
  cout << "enter marks";
  cin >> english;
  cin >> gujarati;
  cin >> maths;
}
void ha()
{
  total = english + gujarati + maths;
  percent = (total * 100) / 300;
}
void rsh()
{
  if (percent > 75)
  {
    cout << " GRADE A";
  }
  else if (percent > 60 && percent <= 75)
  {
    cout << "GRADE B";
  }
  else if (percent > 45 && percent <= 60)
  {
    cout << "GRADE C";
  }
  else if (percent > 35 && percent <= 45)
  {
    cout << "GRADE D";
  }

  else if (percent <= 35)
  {
    cout << "FAILL";
  }
}
int main()
{
  get();
  ha();
  rsh();
}
