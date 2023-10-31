#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ifstream filestream("harsh.txt");

    if(filestream.is_open())
    {
        while(getline(filestream,str))
        {
            cout<<str<<endl;
        }
        filestream.close();
    }
    return 0;
}