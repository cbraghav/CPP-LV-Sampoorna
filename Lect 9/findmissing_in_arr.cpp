#include <bits/stdc++.h>
using namespace std;

int bf()
{
    // TC-> O(N^2)
    // SC-> O(1)
    int n = 5;
    int m = n - 1;
    int arr[4] = {1, 3, 5, 2};
    for (int i = 1; i <= n; i++)
    { // konsi value dhundni hai

        int found = 0;
        for (int j = 0; j < m; j++) // traverse in array
        {
            if (arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            cout << "ans " << i << endl;
            return 0;
        }
    }
    return 0;
}

int optimize1()
{

    // TC O(N)
    // SC O(1)
    int n = 5;
    int m = n - 1;
    int arr[4] = {1, 3, 4, 2};
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }

    cout << "ans " << (n * (n + 1)) / 2 - sum;

    return 0;
}

int main()
{
    // TC O(N)
    // SC O(1)
    int n = 5;
    int m = n - 1;
    int arr[4] = {5, 3, 4, 2};

    int xr = 0;
    for (int i = 1; i <= n; i++)
    {
        xr = xr ^ i;
    }

    for (int i = 0; i < m; i++)
    {
        xr = xr ^ arr[i];
    }

    cout << xr;
    return 0;
}