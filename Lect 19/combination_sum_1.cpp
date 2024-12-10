#include <bits/stdc++.h>
using namespace std;

// you can only use every element at max once

void csum(vector<int> &element, vector<int> &ans, int idx, int target)
{

    // base case
    if (target == 0)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    // base case
    if (idx == element.size())
    {
        return;
    }

    // include
    ans.push_back(element[idx]);
    csum(element, ans, idx + 1, target - element[idx]);

    // not include
    ans.pop_back();
    csum(element, ans, idx + 1, target);
}
int main()
{

    vector<int> element = {1, 2, 3, 7, 4};
    vector<int> ans;
    int target = 6;

    csum(element, ans, 0, target);
}