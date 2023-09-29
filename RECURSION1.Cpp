#include<iostream>
using namespace std;
int recursion1(int a)
{
   if (a==0)
   {
    return 0;
   } 
   else if (a==1)
   {
    return 1;
   }
   return recursion1 (a-1)+(a-2);
}
int main()
{
    for(int i= 0;i<10;i++)
    {
        cout<<recursion1(i);
    }
}