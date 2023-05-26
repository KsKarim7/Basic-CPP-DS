#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student s;
    s.roll = 10;
    s.cls = 9;
    s.section = 'A';
    char nm[100] = "kskarim";
    strcpy(s.name, nm);

    cout << s.name;
    return 0;
}