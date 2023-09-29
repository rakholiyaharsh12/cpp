#include <iostream>
using namespace std;
int main()
{
      char a[40]; 
       int b=0,c=0;


   cout<<"enter a string: ";
   cin >>a;	

	for(int i=0;a[i]!='\0';i++)

	{
	  cout<< a[i];
          b++;
	if(a[i]==' ')
	

	{
	   c++;
	}
        }
b=b-c;
cout<< b;

return 0;
}
