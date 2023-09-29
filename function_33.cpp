#include <iostream>
using namespace std;
int getMarks()
{
    int eng, guj, maths, total;

    cout<< "enter english marks:";
    cin>> eng;
    cout<<"enter gujarati marks: ";
    cin>> guj;
    cout<<"enter maths marks: ";
    cin>> maths;

    total = eng + guj + maths;

    return total;
}

int calculate(int totalMarks)
{
    int percent = (totalMarks * 100) / 300;

    return percent;
}

void showResult(int totalMarks, int percentage)
{
    cout<<"\ntotal" << totalMarks;
    cout<<"\npercentage" << percentage;
}

int main()
{
    int getTotal = getMarks();
    int getPercent = calculate(getTotal);
    showResult(getTotal, getPercent);

}