#include <bits/stdc++.h>

using namespace std;

vector<int> bf()
{

    // TC -> O(N^2)
    // SC ->
    vector<int> arr = {3, 8, 1, 2, 5};

    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {

        bool is_leader = true;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                is_leader = false;
                break;
            }
        }

        if (is_leader == true)
        {
            cout << arr[i] << " ";
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

// TC -> O(N)
int main()
{
    vector<int> arr = {3, 8, 1, 2, 0};

    vector<int> ans;

    int maxi = INT_MIN;

    // traverse from end
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
    }
}