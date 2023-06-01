#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakibul", 23);
    Person *sakib = new Person("Sakibul", 26);

    // rakib = sakib   you cant do this cause if you delete sakib at a point your interpreter will throw you an error

    *rakib = *sakib;
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}