#include <bits/stdc++.h>

using namespace std;

// vector<int> dp(13, -1);
// int fib(int n) //O(N) time + O(N) space
// {
//     if (n == 0 or n == 1)
//     {
//         return n;
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     return dp[n] = fib(n - 1) + fib(n - 2); // store dp[5] =
// }

int tab() // O(N) time _+ O(N) space
{

    // cout << fib(12) << endl;
    int n = 5;
    vector<int> dp(n + 1, -1);

    dp[0] = 0;
    dp[1] = 1;

    // dp[n] = fib(n - 1) + fib(n - 2);
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << "ans is " << dp[n];
}

int main()
{ // tab + storage optimize   O(N) time + O(1) space

    // cout << fib(12) << endl;
    int n = 5;
    // vector<int> dp(n + 1, -1);

    int second_last = 0;
    int last = 1;
    int ans;

    // dp[n] = fib(n - 1) + fib(n - 2);
    for (int i = 2; i <= n; i++)
    {
        // dp[i] = dp[i - 1] + dp[i - 2];
        ans = last + second_last;

        second_last = last;
        last = ans;
    }

    cout << "ans is " << ans;
}