#include <bits/stdc++.h>
using namespace std;

int bf()
{
    // TC O(N);
    // SC O(N);
    int arr[11] = {1, 0, 2, 0, 3, 4, 5, 6, 0, 0, 1};
    int n = 11;
    int temp[n]{};
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        // temp[i]=0;
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}

int main()
{
    // TC O(N)
    // SC O(1)
    int arr[11] = {1, 0, 2, 55, 3, 4, 5, 6, 0, 0, 1};
    int n = 11;

    int j = n + 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}