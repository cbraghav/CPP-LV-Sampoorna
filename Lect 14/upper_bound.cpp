#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 3, 6, 9, 10, 14, 14, 14, 18, 22};
    int n = arr.size();
    int k = 10;

    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

// Int arr [] = { 3,4,12,13,13,13,29}

// For k = 13

// lower bound =  first occur  or just greater  ->idx 3
// Upper bound = just greater           ->idx 6
// floor -> just smaller   -> idx 2
// Ceil -> last occur or just greater  -> idx 5

// For k = 15

// lower bound =  first occur  or just greater  ->idx 6
// Upper bound = just greater           ->idx 6
// floor -> just smaller   -> idx 5
// Ceil -> last occur or just greater  -> idx6