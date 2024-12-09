#include <bits/stdc++.h>
using namespace std;

// tc -> O(N)
bool canpaint(vector<int> &boards, int n, int k, int time)
{
    int painter_no = 1;
    int work_done = 0;
    for (int i = 0; i < n; i++)
    {
        if (work_done + boards[i] <= time)
        {
            work_done = work_done + boards[i];
        }
        else
        {
            painter_no++;
            work_done = 0;
            work_done = work_done + boards[i];
        }
    }

    if (painter_no > k)
    {
        return false;
    }
    else // painter_no <= k
    {
        return true;
    }
}
int main()
{

    vector<int> v = {6, 5, 6, 4, 7, 3, 7};
    int n = v.size();
    int k = 3;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    int lo = 1;
    int hi = sum;
    int ans = INT_MAX;

    // TC -> NLog(maxdist)
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (canpaint(v, n, k, mid)) // O(N)
        {
            // if we can paint in mid time ->
            // move to left to find a lesser time
            ans = min(ans, mid);
            hi = mid - 1;
        }
        else
        {
            // move to right
            lo = mid + 1;
        }
    }

    cout << ans << endl;
}