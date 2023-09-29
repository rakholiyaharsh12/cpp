#include<iostream>
using namespace std;
int main()
{
   char a[40];
   int b=0; 
   {
      cout<<"enter string =";
      cin>>a;
   }

	for(int i=0;a[i]!='\0';i++)
{
  	cout<<a[i];
	b++;
}
    cout<<b;
    cout<< "\n";


}
