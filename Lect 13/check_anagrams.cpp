#include <bits/stdc++.h>
using namespace std;

int o1()
{
    string s1 = "acbz";
    string s2 = "zabc";

    if (s1.length() != s2.length())
    {
        cout << "false";
        return 0;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
    {
        cout << "true";
        return 0;
    }
    else
    {
        cout << "false";
        return 0;
    }
}

int main()
{
    string s1 = "acbz";
    string s2 = "zabc";
    map<char, int> freq1, freq2;

    for (auto i : s1)
    {
        freq1[i]++;
    }

    for (auto i : s2)
    {
        // freq2[i]++;
        freq1[i]--;
    }

    // for (char c = 'a'; c <= 'z'; c++)
    // {
    //     if (freq1[c] != freq2[c])
    //     {
    //         cout << "false";
    //         return 0;
    //     }
    // }

    for (auto i : freq1)
    {
        if (i.second != 0)
        {
            cout << " false";
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}