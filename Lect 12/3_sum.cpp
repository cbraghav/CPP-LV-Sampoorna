#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum = 30;
    vector<int> arr = {1, 3, 5, 6, 2, 5, 7};

    for (int k = 0; k < arr.size(); k++)
    {
        int sum2 = sum - arr[k];

        // two sum

        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            if (i == k)
            {
                continue;
            }
            int x = sum2 - arr[i];
            if (mp.find(x) != mp.end())
            {
                cout << "sum exist";
                return 0;
            }

            mp[arr[i]]++;
        }
    }
    cout << "not found";
}
