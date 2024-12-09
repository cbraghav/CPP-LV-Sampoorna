#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TC -> n*Log(Num)
    int Num = 35;
    int n = 3;

    int lo = 0;
    int hi = Num;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        int val = 1;
        for (int i = 1; i <= n; i++)
        {
            val = val * mid;
        }
        if (val <= Num)
        {
            ans = max(ans, mid);
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}