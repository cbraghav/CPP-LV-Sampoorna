#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "bbcbbaaazzxx";
    map<char, int> freq;
    for (auto i : s)
    {
        freq[i]++;
    }

    vector<pair<int, char>> vec;
    for (auto i : freq)
    {
        vec.push_back({i.second, i.first});
    }
    sort(vec.begin(), vec.end());
    // sorted vector by freq;

    string ans;

    for (auto i : vec)
    {
        // i.first -> count
        // i.second -> char
        for (int j = 0; j < i.first; j++)
        {
            ans.push_back(i.second);
        }
    }

    cout << ans << endl;
}