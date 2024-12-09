#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 6, 8, 9, 10, 11, 12, 1, 2, 3};
    int n = v.size();

    int lo = 0;
    int hi = n - 1;

    while (lo <= hi)
    {

        int mid = (lo + hi) / 2;

        // mid itself is peak
        if ((mid == 0 or v[mid] > v[mid - 1]) and
            (mid == n - 1 or v[mid] > v[mid + 1]))
        {
            cout << v[mid] << " is peak at index " << mid << endl;
            return 0;
        }

        //
        if (v[mid - 1] < v[mid])
        {
            lo = mid + 1; // move to right
        }
        else
        {
            hi = mid - 1; // move to left
        }
    }

    cout << "no peak";
}