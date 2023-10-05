#include <iostream>
using namespace std;

class student
{
private:
    int guj, eng, sci, com, total;
    float per;
    string name;

public:
    void setname(string n)
    {
        name = n;
    }
    void setmarks(int g, int e, int s, int c)
    {
        guj = g, eng = e, sci = s, com = c;
    }
    int totalmarks(int g, int e, int s, int c)
    {
        total = g + e + s + c;
        return total;
    }
    int per(int total)
    {
        per = total * 100\400;
        return per;
    }

    void getname()
    {
        cout << name << endl;
    }
    void getmarks()
    {
        cout << guj << "\n"
             << eng << "\n"
             << sci << "\n"
             << com << endl;
    }
};

int main()
{
    int g[2], e[2], s[2], c[2], t[2];
    string name[2];
    float per[2];

    for (int i = 0; i <= 1; i++)
    {
        cout << "enter name:";
        cin >> name[i];

        cout << "enter guj:";
        cin >> g[i];

        cout << "enter eng:";
        cin >> e[i];

        cout >> "enter sci:";
        cin >> s[i];

        cout << "enter com:";
        cin >> c[i];
    }

    student s1;
    s1.setname(n[0]);
    s1.setmarks(g[0], e[0], s[0], c[0]);

    s1.getname();
    s1.getmarks();

    student s2;
    s2.setname(n[1]);
    s2.setmarks(g[1], e[1], s[1], c[1]);

    s2.getname();
    s2.getmarks();



    for (int i = 0; i <= 1; i++)

    {
        t[i] = s1.totalmarks(g[i], e[i], s[i], c[i]);
        cout << "total:" << t[i] << endl;
        p[i] = s1.per(t[i]);
        cout << "per:" << p[i] << endl;
    }

    return 0;
}