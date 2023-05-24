#include <iostream>
using namespace std;
int main()
{
    int v;
    cin >> v;
    switch (v)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
    case 3:
        cout << "Three" << endl;
    default:
        cout << "Didn't match" << endl;
    }
    return 0;
}