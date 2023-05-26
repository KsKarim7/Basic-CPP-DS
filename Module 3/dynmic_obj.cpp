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

int main()
{
    char name[100] = "Khaled Saifullah Karim";
    // Student ks(29, 'A', 7, name);
    Student *ks = new Student(29, 'A', 7, name);
    (*ks).roll = 12;

    // cout << (*ks).name << endl;
    // cout << (*ks).roll << endl;
    // cout << (*ks).cls << endl;
    // cout << (*ks).section << endl;

    // shortcut method *will only work is ks is a pointer or an array and it is a dynamic obj
    // (*ks). = ks->

    cout << ks->name << endl;
    cout << ks->roll << endl;
    cout << ks->cls << endl;
    cout << ks->section << endl;

    // delete ks  //deletation of an object
    return 0;
}