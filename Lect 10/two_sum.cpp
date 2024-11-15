#include <bits/stdc++.h>
using namespace std;

int b1()
{

    int arr[8] = {1, 2, 3, 5, 2, 4, 8, 12};
    int n = 8;
    int sum = 9;
    map<int, int> mp;

    // TC -> O(N*LOG(N))
    // SC -> O(N)
    for (int i = 0; i < n; i++)
    {
        int x1 = arr[i];
        int x2 = sum - x1;
        if (mp.find(x2) != mp.end())
        {
            cout << "YES ";
            cout << i << " " << mp[x2] << endl;
            return 0;
        }
        mp[x1] = i;
    }

    cout << "No";
    return 0;
}

// TC -> NlogN
// SC -> O(1)
int main()
{
    int arr[8] = {1, 2, 3, 5, 2, 4, 8, 12};
    int n = 8;
    int sum = 9;
    // TC O(NlogN)
    sort(arr, arr + n);
    int lo = 0;
    int hi = n - 1;
    // TC O(N)
    while (lo < hi)
    {
        int curr_sum = arr[lo] + arr[hi];
        if (curr_sum == sum)
        {
            cout << "YES";
            return 0;
        }
        else if (curr_sum < sum)
        {
            lo++;
        }
        else
        { // curr_sum > sum
            hi--;
        }
    }
}