#include <bits/stdc++.h>
using namespace std;

int bf()
{

    vector<int> arr = {1, 1, 3, 4, 1, 1, 3};
    int ans = INT_MIN;
    // TC ->  O( N^3)
    for (int l = 0; l < arr.size(); l++)
    {
        for (int r = l; r < arr.size(); r++)
        {
            // cout << "l -> " << l << " r-> " << r << endl;
            // range -> l to r
            int curr_sum = 0;
            for (int i = l; i <= r; i++)
            {
                curr_sum += arr[i];
            }

            if (curr_sum > ans)
            {
                ans = curr_sum;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

int o1()
{

    vector<int> arr = {-2, 1, 3, 4, -7, -2, 8};
    int ans = INT_MIN;
    // TC ->  O( N^2)
    for (int l = 0; l < arr.size(); l++)
    {
        int curr_sum = 0;
        for (int r = l; r < arr.size(); r++)
        {
            // cout << "l -> " << l << " r-> " << r << endl;
            curr_sum += arr[r];

            if (curr_sum > ans)
            {
                ans = curr_sum;
            }
        }
    }

    for (int l = 0; l < arr.size(); l++)
    {
        int curr_sum = 0;
        for (int r = l; r < arr.size(); r++)
        {
            // cout << "l -> " << l << " r-> " << r << endl;
            curr_sum += arr[r];

            if (curr_sum == ans)
            {
                cout << l << " " << r << endl;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

int main()
{
    // TC -> O(N)
    vector<int> arr = {-2, 1, -3, 6, -7, -2, 8};
    int ans = INT_MIN;

    int curr_sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum += arr[i];

        if (curr_sum > ans)
        {
            ans = curr_sum;
        }

        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    cout << ans << endl;
}