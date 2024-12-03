#include <bits/stdc++.h>
using namespace std;

int iterative_binary_search()
{

    vector<int> arr = {1, 3, 4, 6, 9, 10, 14, 18, 22};
    int n = arr.size();
    int k = 3;

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == k)
        {
            cout << "k exist";
            return 0;
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

    cout << "k does not exist";
    return 0;
}

bool bin_search(int low, int high, int k, vector<int> &v)
{
    // base case
    if (low > high)
    {
        return false;
    }

    int mid = (low + high) / 2;
    if (v[mid] == k)
    {
        return true;
    }
    else if (v[mid] < k)
    {
        // right side
        return bin_search(mid + 1, high, k, v);
    }
   
        // left side
        return bin_search(low, mid - 1, k, v);
    
}
int main()
{
    vector<int> arr = {1, 3, 4, 6, 9, 10, 14, 18, 22};
    int n = arr.size();
    int k = 9;
    cout << bin_search(0, n - 1, k, arr);
}