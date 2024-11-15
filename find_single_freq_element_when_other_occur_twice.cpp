#include <bits/stdc++.h>
using namespace std;

int bf()
{

    int arr[7] = {1, 2, 3, 4, 3, 2, 1};

    int n = 7;

    int ans = 0;
    // TC -> O(N^2)
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                found = true;
            }
        }

        if (found == false)
        {
            ans = arr[i];
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

int o1()
{
    int arr[7] = {1, 2, 3, 6542, 3, 2, 1};

    int n = 7;

    int ans = 0;
    // key -> element
    // value -> count of element
    map<int, int> freq;
    // TC-> O(N*Log(M))
    // M = N/2  + 1
    // SC-> O(M)
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        freq[key]++;
        // freq[arr[i]]++=;
    }

    for (auto it : freq)
    {
        if (it.second == 1)
        {
            // it.second -> value
            ans = it.first;
        }
    }
    cout << ans << endl;
    return 0;
}

int main()
{

    int xr = 0;
    int arr[7] = {1, 2, 3, 6542, 3, 2, 1};

    int n = 7;
    // TC-> O(N)
    // SC-> O(1)
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ arr[i];
    }
    cout << xr;
}