#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        // cin >> a[i].name; you cant take space as input line this
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore(); // because it is taking enter as input and in the next iteration  and throwing an error
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}