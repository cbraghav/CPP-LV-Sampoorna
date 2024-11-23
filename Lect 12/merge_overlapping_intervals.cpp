#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TC -> O(N)

    // pair<int,int> = {1,2};
    vector<pair<int, int>> intervals = {{1, 3},
                                        {10, 12},
                                        {7, 9},
                                        {2, 4},
                                        {11, 15},
                                        {12, 14}};

    // step 1 -> sort intervals
    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> ans;
    ans.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++)
    {
        // i -> next
        // ans.back() -> last

        if (intervals[i].first <= ans.back().second)
        {
            // ans.back().second = intervals[i].second;
            ans.back().second = max(ans.back().second, intervals[i].second);
        }
        else
        {
            ans.push_back(intervals[i]);
        }
    }

    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
}