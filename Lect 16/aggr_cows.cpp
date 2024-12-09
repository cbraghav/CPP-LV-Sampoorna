#include <bits/stdc++.h>
using namespace std;

// tc -> O(N)
bool canplace(vector<int> &stalls, int n, int k, int dist)
{
    int placed_cows = 1;
    int last_place_loc = stalls[0];

    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_place_loc >= dist)
        {
            placed_cows++;              // we placed another cow
            last_place_loc = stalls[i]; // update loc of last placed cow
        }
    }
    if (placed_cows >= k)
    {
        return true; // valid placement
    }
    else
    {
        return false;
    }
}
int main()
{

    vector<int> v = {0, 3, 4, 7, 11, 15, 19};
    int n = v.size();
    int k = 3;

    sort(v.begin(), v.end());

    int lo = 1;
    int hi = v[n - 1];
    int ans = -1;

    // TC -> NLog(maxdist)
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (canplace(v, n, k, mid)) // O(N)
        {
            // if we can place at mid dist
            // move to right
            lo = mid + 1;
            ans = max(ans, mid);
        }
        else
        {
            // move to left
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}