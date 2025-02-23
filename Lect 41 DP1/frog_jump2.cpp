int frog_jump(int idx, int k, vector<int> &height, vector<int> &dp)
{

    // base case
    if (idx <= 0)
    {
        return 0;
    }
    if (dp[idx] != -1)
        return dp[idx];

    int cost = 1e9;

    for (int j = 1; j <= k; j++)
    {
        if (idx - j >= 0)
        {
            cost = min(cost, frog_jump(idx - j, k, height, dp) + abs(height[idx - j] - height[idx]));
        }
    }

    return dp[idx] = cost;
}

//   O(N*K)
int minimizeCost(int k, vector<int> &arr)
{
    // Code here
    int n = arr.size();
    vector<int> dp(n + 1, -1);
    // return frog_jump(n-1, k , arr, dp);

    dp[0] = 0;

    for (int idx = 1; idx < n; idx++)
    {
        int cost = 1e9;
        for (int j = 1; j <= k; j++)
        {
            if (idx - j >= 0)
            {
                cost = min(cost, dp[idx - j] + abs(arr[idx - j] - arr[idx]));
            }
        }
        dp[idx] = cost;
    }

    return dp[n - 1];
}