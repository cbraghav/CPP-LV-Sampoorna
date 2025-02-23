#include <bits/stdc++.h>

using namespace std;

int solve(int N, string S, string R)
{

    map<char, int> hash;
    for (auto i : S)
    {
        hash[i]++;
    }

    for (auto i : R)
    {
        hash[i]--;
    }

    int ans = 0;
    for (auto i : hash)
    {
        ans += abs(i.second);
    }
    return ans / 2;
}

int main()
{

    cout << solve(5, "abdfd", "abcde") << endl;
    cout << solve(4, "abcd", "best") << endl;
    cout << solve(3, "abc", "abc") << endl;
}