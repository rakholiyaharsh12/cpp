#include <iostream>
using namespace std;
int main()

{
  int  i,b=0,c,a;
  

  cout<<"enter valu:";
cin>>a;


	for(i=1;i<=a;i++)
{
	if(a%1==0)
{
b++;
}
}
if(b<=2)
{
cout<<"prime: ";
}
else
{
cout<<"no prime";
}
return 0;
}