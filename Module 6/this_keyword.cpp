#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        (*this).name = name;
        (*this).age = age;
        // this->age=age
    }
};

int main()
{
    Person khan("Khaled Khan", 20);
    cout << khan.name << " " << khan.age << endl;
    return 0;
}