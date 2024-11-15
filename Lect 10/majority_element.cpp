#include <bits/stdc++.h>
using namespace std;

int o1()
{
    // BF TC -> O(N^2)

    // using map TC-> O(N) SC-> O(N);
    int arr[7] = {1, 1, 1, 1, 2, 3, 2};
    int n = 7;

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (auto it : freq)
    {
        if (it.second > n / 2)
        {
            cout << it.first << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

int main()
{
    // Moore's Voting Algo

    int arr[7] = {1, 1, 4, 1, 2, 3, 2};
    int n = 7;

    int ele = -1;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            ele = arr[i];
            cnt++;
        }
        else if (arr[i] == ele)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    // either ele is the ans , otherwise -1

    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
            cnt++;
    }
    if (cnt > n / 2)
    {
        cout << "ele is winner " << ele;
    }
    else
    {
        cout << " no one is winner";
    }
}