#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // cin.ignore(); or
    getchar();
    string s;
    // cin >> s;
    // cin.getline(s,100); char s[100]   this procedure is for this type not dynamic
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    return 0;
}