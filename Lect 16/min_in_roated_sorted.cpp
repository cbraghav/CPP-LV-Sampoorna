#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 6, 7, 8, 9, 1, 2, 3};
    int n = v.size();

    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (v[low] <= v[mid]) // left part is sorted
        {
            ans = min(ans, v[low]);
            low = mid + 1; // move to right
        }
        else
        { // right part is sorted

            ans = min(ans, v[mid]);
            high = mid - 1;
        }
    }

    cout << ans << endl;
}