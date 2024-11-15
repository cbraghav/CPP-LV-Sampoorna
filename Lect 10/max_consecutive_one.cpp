#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[8] = {0, 1, 1, 0, 0, 1, 1, 1};
    int n = 8;

    int cnt = 0;
    int max_cnt = 0;

    // TC -> O(N)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
}