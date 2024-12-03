#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 3, 6, 9, 10, 14, 14, 14, 18, 22};
    int n = arr.size();
    int k = 14;

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            ans = mid;
            // kya pta left side ek aur occur ho
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1; // right side
        }
        else
        {
            high = mid - 1; // left side
        }
    }
    cout << ans << endl;
}