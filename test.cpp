#include <bits/stdc++.h>

using namespace std;

long long solve(int N, vector<int> A)
{

    sort(A.begin(), A.end());

    long long ans = 0;
    int lo = 0;
    int hi = A.size() - 1;
    while (lo < hi)
    {
        ans += abs(A[hi] - A[lo]);
        hi--;
        lo++;
    }

    return ans;
}

int main()
{

    cout << solve(8, {2, 6, 9, 1, 11, 2, 10, 12}) << endl;
    cout << solve(5, {90, 54, 37, 3, 67}) << endl;
    cout << solve(6, {2, 6, 4, 8, 13, 6}) << endl;
}