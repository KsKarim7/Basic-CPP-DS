#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char c;
    int count;
};

bool compare(CustomSort a, CustomSort b)
{
    if (a.count > b.count)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    CustomSort freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i].c = (i + 'a');
        freq[i].count = 0;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << freq[i].c << " " << freq[i].count << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        freq[c - 'a'].count++;
    }
    sort(freq, freq + 26, compare);
    for (int i = 0; i < 26; i++)
    {
        // cout << freq[i].c << " " << freq[i].count << endl;
        if (freq[i].count > 0)
        {
            // cout << freq[i].c << " " << freq[i].count << endl;
            for (int j = 0; j < freq[i].count; j++)
            {
                cout << freq[i].c;
            }
        }
    }
    return 0;
}