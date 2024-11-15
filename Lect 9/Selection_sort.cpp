#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {5, 1, 4, 2, 5, 8, 3};
    // // TC O(N^2)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int minidx = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[minidx])
    //         {
    //             minidx = j;
    //         }
    //     }
    //     swap(arr[i], arr[minidx]);
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}