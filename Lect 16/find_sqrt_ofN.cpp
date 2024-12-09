#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TC -> Log(N)
    int N = 35;

    int lo = 0;
    int hi = N;
    int ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;

        if (mid * mid <= N)
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