#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str="I am learnig skillqode";

    ofstream filestream("E:/h.program/cpp/harsh_2.txt",ios::app);

    if(filestream.is_open())

    {
         filestream<<str<<endl;
        filestream<<"rakholiya"<<endl;
       
        filestream.close();
    }
    return 0;
}