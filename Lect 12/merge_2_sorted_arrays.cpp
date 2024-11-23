#include <bits/stdc++.h>
using namespace std;

int bf()
{
    // TC NlogN
    // SC N

    vector<int> arr1 = {1, 3, 5, 6, 7, 8, 20}; // N
    vector<int> arr2 = {2, 3, 4, 7, 8, 9};     // M

    vector<int> ans;

    for (auto i : arr1)
    {
        ans.push_back(i);
    }
    for (auto i : arr2)
    {
        ans.push_back(i);
    }

    sort(ans.begin(), ans.end()); // TC O( (N+M)log(N+M) )

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

int main()
{

    // TC O (N + M)
    // SC O (N + M)

    vector<int> arr1 = {1, 3, 5, 6, 7, 8, 20};
    vector<int> arr2 = {2, 3, 4, 7, 8, 9};

    vector<int> ans;

    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (j < arr2.size())
    {
        ans.push_back(arr2[j]);
        j++;
    }

    while (i < arr1.size())
    {
        ans.push_back(arr1[i]);
        i++;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}