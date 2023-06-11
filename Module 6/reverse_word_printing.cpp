#include <bits/stdc++.h>
using namespace std;

// int print(stringstream &ss, int count)
// { //& means reference
//     string word;
//     if (ss >> word)
//     {
//         count += 1;
//         cout << word << endl;
//         print(ss, count);
//     }
//     return count;
// }

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    int l = 0;
    while (ss >> word)
    {
        count += 1;
        cout << word << endl;
        if (count == 4)
        {
            l = word.length();
        }
    }
    // int c = print(ss, 0);
    cout << l << endl;
    int n = s.front();
    cout << n;

    return 0;
}