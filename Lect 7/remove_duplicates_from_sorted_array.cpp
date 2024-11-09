#include <bits/stdc++.h>
using namespace std;

void remove1(int arr[], int n)
{
    int arr2[n];
    for (int i = 0; i < n; i++)
        arr2[i] = -1;
    int j = 0;
    arr2[0] = arr[0];
    j++;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr2[j - 1])
        {
            arr2[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
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

    remove1(arr, n);
}
