#include <bits/stdc++.h>
using namespace std;

int o1()
{
    int arr[8] = {1, 2, 0, 1, 1, 0, 0, 0};

    int n = 8;
    int c0 = 0, c1 = 0, c2 = 0;
    // TC -> O(N)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (c0 > 0)
        {
            arr[i] = 0;
            c0--;
        }
        else if (c1 > 0)
        {
            c1--;
            arr[i] = 1;
        }
        else
        {
            c2--;
            arr[i] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int arr[8] = {1, 2, 0, 1, 1, 0, 0, 0};

    int n = 8;
    int low = 0;      // first 1
    int mid = 0;      // first unsorted
    int high = n - 1; // last unsorted

    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        { // arr[mid] == 0

            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]
             << " ";
    }

    // TC -> O(3N)
}