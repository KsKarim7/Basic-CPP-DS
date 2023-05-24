#include <iostream>
using namespace std;
int main()
{
    int inp;
    cin >> inp;
    switch (inp % 2)
    {
    case 0:
        /* code */
        cout << "even" << endl;
        break;
    default:
        cout << "odd" << endl;
    }
    return 0;
}