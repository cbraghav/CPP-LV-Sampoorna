#include <bits/stdc++.h>
using namespace std;

void del_in_arr(int arr[], int n, int idx)
{

    int newarr[n - 1];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == idx - 1)
        {
            continue;
        }

        newarr[j] = arr[i];
        j++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << newarr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int elem, idx;
    cin >> idx;

    del_in_arr(arr, n, idx);
}