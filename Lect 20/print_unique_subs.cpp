#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v, vector<int> &cur, int idx, set<vector<int>> &ans)
{
    // base
    if (idx >= v.size())
    {
        ans.insert(cur);
        return;
    }

    // take
    cur.push_back(v[idx]);
    solve(v, cur, idx + 1, ans);
    cur.pop_back();
    // not take
    solve(v, cur, idx + 1, ans);
}

int main()
{

    vector<int> v = {1, 2, 2, 3};
    vector<int> subs;
    set<vector<int>> ans;

    solve(v, subs, 0, ans);

    for (auto v : ans)
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}