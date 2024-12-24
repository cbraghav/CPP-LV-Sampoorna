#include <bits/stdc++.h>
using namespace std;

int bf()
{
    // TC O(N*K)
    vector<int> v = {3, 2, -1, 7, -2, 3};
    int n = v.size();
    int k = 3;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // i is starting of window of size k
        int sum = 0;
        for (int j = 0; j < k; j++)
        {

            if (i + j < n)
            {
                sum += v[i + j];
            }
        }

        ans = max(ans, sum);
    }

    cout << ans << endl;
}

// TC O(N) SC O(K)
int o1()
{
    vector<int> v = {3, 2, -1, 7, -2, 3};
    int n = v.size();
    int k = 3;
    int ans = INT_MIN;

    queue<int> q;
    int sum = 0;
    for (int i = 0; i < n and i < k; i++)
    {
        q.push(v[i]);
        sum += v[i];
    }
    // q =  { 3, 2 , -1}
    ans = sum;

    for (int i = k; i < n; i++)
    {
        sum += v[i];
        q.push(v[i]);

        sum -= q.front();
        q.pop();

        ans = max(ans, sum);
    }

    cout << ans << endl;
}

// TC O(N) SC O(1)
int main()
{
    vector<int> v = {3, 2, -1, 7, -2, 3};
    int n = v.size();
    int k = 3;
    int ans = INT_MIN;

    int sum = 0;
    for (int i = 0; i < n and i < k; i++)
    {

        sum += v[i];
    }
    // q =  { 3, 2 , -1}
    ans = sum;

    for (int i = k; i < n; i++)
    {
        sum += v[i];

        sum -= v[i - k];

        ans = max(ans, sum);
    }

    cout << ans << endl;
}