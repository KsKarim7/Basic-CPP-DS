#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string nam, int agee)
    {
        name = nam;
        age = agee;
    }
    void hello()
    {
        cout << "hello from class function" << endl;
    }
};

int main()
{
    Person khan("Khaled Khan", 23);
    // cout << khan.name << " " << khan.age << endl;
    khan.hello();
    return 0;
}