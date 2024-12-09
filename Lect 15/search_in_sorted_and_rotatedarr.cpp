#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 6, 8, 9, 10, 11, 12, 1, 2, 3};
    int n = v.size();
    int k = 8;
    int lo = 0;
    int hi = n - 1;

    int ans = -1;

    while (lo <= hi)
    {
        // calculate mid ;
        int mid = (lo + hi) / 2;

        if (v[mid] == k)
        {
            cout << mid << endl;
            return 0;
        }

        if (v[lo] <= v[mid])
        { // left part is sorted;

            if (v[lo] <= k and k <= v[mid])
            {
                // move to left
                hi = mid - 1;
            }
            else
            {
                // move to right
                lo = mid + 1;
            }
        }
        else
        { // right part is sorted

            if (v[mid] <= k and k <= v[hi])
            {
                // move to right
                lo = mid + 1;
            }
            else
            {
                // move to left
                hi = mid - 1;
            }
        }
    }

    cout << "k does not exist";
}