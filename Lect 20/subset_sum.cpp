#include <bits/stdc++.h>
using namespace std;

// TC -> O(2^n) + klog(k) , where k is 2^n

void solve(vector<int> &v, vector<int> &ans, int idx, int sum)
{
    // base case
    if (idx >= v.size())
    {
        ans.push_back(sum);
        return;
    }

    // choose it
    solve(v, ans, idx + 1, sum + v[idx]);
    // skip
    solve(v, ans, idx + 1, sum);
}

int main()
{

    vector<int> v = {1, 2, 5, 3};
    vector<int> ans;
    int sum = 0;
    int ind = 0;

    solve(v, ans, ind, sum);

    sort(ans.begin(), ans.end());

    for (auto i : ans)
    {
        cout << i << " ";
    }
}