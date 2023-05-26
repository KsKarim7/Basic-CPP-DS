#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int id, int s, int c, char *n)
    {
        cout << "Calling the constructor first time in cpp" << endl;
        roll = id;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

Student func()
{
    char name[100] = "Khalz";
    Student ks(22201091, 'A', 13, name);
    return ks;
}

int main()
{
    Student ks = func();
    cout << ks.section;
    return 0;
}